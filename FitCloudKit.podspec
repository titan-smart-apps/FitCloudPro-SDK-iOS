Pod::Spec.new do |s|
    s.name             = "FitCloudKit"
    s.version          = "1.0.0"
    s.summary          = "iOS framework for FitCloud Smart Bracelet, which is responsible for the communication with bracelet. FitCloud智能手环的iOS框架，负责与手环设备通信等功能的封装。"
    s.description      = <<-DESC
    和唐公司手环SDK。
    DESC
    s.homepage         = "https://github.com/htangsmart/FitCloudPro-SDK-iOS/tree/{s.version}/FitCloudKit"
    s.license          = 'MIT'
    s.author           = {"pcjbird" => "pcjbird@hotmail.com"}
    s.source           = {:git => "https://github.com/htangsmart/FitCloudPro-SDK-iOS.git", :tag => s.version.to_s}
    s.social_media_url = 'http://www.hetangsmart.com'
    s.requires_arc     = true
    s.documentation_url = 'https://github.com/htangsmart/FitCloudPro-SDK-iOS/blob/{s.version}/FitCloudKit/README.md'
    s.screenshot       = 'https://github.com/htangsmart/FitCloudPro-SDK-iOS/{s.version}/FitCloudKit/logo.png'

    s.platform         = :ios, '8.0'
    s.frameworks       = 'Foundation', 'CoreBluetooth', 'CoreGraphics'

    s.vendored_frameworks = 'FitCloudKit/FitCloudKit.framework'
    s.resource = 'FitCloudKit/FitCloudKit.bundle'

    s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }


end
