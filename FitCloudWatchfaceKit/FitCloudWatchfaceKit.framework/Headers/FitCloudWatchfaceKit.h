//
//  FitCloudWatchfaceKit.h
//  FitCloudWatchfaceKit
//
//  Created by pcjbird on 7/10/20.
//  Copyright © 2020 Zero Status. All rights reserved.
//
//  框架名称:FitCloudWatchfaceKit.framework
//  框架功能:iOS framework help you creating customized watchface for fitcloud smart watch easily. FitCloud 智能手表自定义表盘创建框架， 旨在帮助您轻松创建属于您自己的表盘文件。
//  修改记录:
//     pcjbird    2020-07-16  Version:1.0.1 Build:201907160001
//                            1.自动裁剪背景图/预览图
//
//     pcjbird    2020-07-10  Version:1.0.0 Build:201907100001
//                            1.首次发布SDK版本
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <FitCloudWatchfaceKit/FCWKErrorCode.h>

//! Project version number for FitCloudWatchfaceKit.
FOUNDATION_EXPORT double FitCloudWatchfaceKitVersionNumber;

//! Project version string for FitCloudWatchfaceKit.
FOUNDATION_EXPORT const unsigned char FitCloudWatchfaceKitVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <FitCloudWatchfaceKit/PublicHeader.h>

/**
 * @brief 日志等级
*/
typedef NS_ENUM(NSInteger, FCWKLOGLEVEL) {
    FCWKLOGLEVEL_DEBUG = 0,
    FCWKLOGLEVEL_VERBOSE,
    FCWKLOGLEVEL_INFO,
    FCWKLOGLEVEL_WARNING,
    FCWKLOGLEVEL_ERROR,
    FCWKLOGLEVEL_EXCEPTION,
    FCWKLOGLEVEL_ABORT,
    FCWKLOGLEVEL_MIN = FCWKLOGLEVEL_DEBUG,
    FCWKLOGLEVEL_MAX = FCWKLOGLEVEL_ABORT,
    FCWKLOGLEVEL_MUTE = FCWKLOGLEVEL_MAX
};

/**
 * @brief 日期时间在表盘上的位置
 */
typedef NS_ENUM(NSInteger, FITCLOUDWATCHFACEDTPOSITION)
{
    FITCLOUDWATCHFACEDTPOSITION_TOP = 0,         //上方
    FITCLOUDWATCHFACEDTPOSITION_BOTTOM = 1,      //下方
    FITCLOUDWATCHFACEDTPOSITION_LEFT = 2,        //左方
    FITCLOUDWATCHFACEDTPOSITION_RIGHT = 3,       //右方
};


/**
 *@brief 表盘生成进度
 *@param progress 进度百分比，0.0～1.0
 *@param message 进度提示
 */
typedef void (^FitCloudWatchfaceCreatingProgress)(CGFloat progress, NSString* _Nullable message);

/**
 *@brief 日志
 *@param level 日志等级
 *@param message 日志内容
*/
typedef void (^FitCloudWatchfaceLoggingMessage)(FCWKLOGLEVEL level, NSString* _Nullable message);

/**
 *@brief 表盘生成结果
 *@param success 是否生成成功
 *@param resultBinPath 生成的表盘Bin文件路径
 *@param resultBkImage 处理后的背景图
 *@param resultPreview 处理后的预览图
 *@param error 错误
*/
typedef void(^FitCloudWatchfaceCreateResultBlock)(BOOL success, NSString* _Nullable resultBinPath, UIImage* _Nullable resultBkImage, UIImage* _Nullable resultPreview, NSError* _Nullable error);


/**
 * @brief 表盘生成框架
 */
@interface FitCloudWatchfaceKit : NSObject

/**
 * @brief 根据模版Bin文件生成新的自定义表盘Bin文件
 * @param templateBin 模版Bin文件路径
 * @param bkImage 背景图
 * @param preview 预览图
 * @param dtPosition 表盘日期时间在表盘上的位置
 * @param progress 进度
 * @param logging 日志
 * @param completion 结果回调
*/
+(void) createWithTemplateBin:(NSString*_Nonnull)templateBin bkImage:(UIImage*_Nonnull)bkImage preview:(UIImage*_Nonnull)preview dtPosition:(FITCLOUDWATCHFACEDTPOSITION)dtPosition progress:(FitCloudWatchfaceCreatingProgress  _Nullable)progress logging:(FitCloudWatchfaceLoggingMessage _Nullable)logging completion:(FitCloudWatchfaceCreateResultBlock _Nullable)completion;

@end
