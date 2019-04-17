Pod::Spec.new do |s|
    s.name             = "FitCloudDFUKit"
    s.version          = "1.0.0"
    s.summary          = "iOS framework for FitCloud Smart Bracelet Device Firmware Upgrade, which is responsible for the upgrade of bracelet firmware. FitCloud智能手环固件升级的iOS框架，负责手环固件升级等功能的封装。"
    s.description      = <<-DESC
    和唐公司手环固件升级SDK。
    DESC
    s.homepage         = "https://github.com/htangsmart/FitCloudPro-SDK-iOS/tree/{s.version}/FitCloudDFUKit"
    s.license          = 'MIT'
    s.author           = {"pcjbird" => "pcjbird@hotmail.com"}
    s.source           = {:git => "https://github.com/htangsmart/FitCloudPro-SDK-iOS.git", :tag => s.version.to_s}
    s.social_media_url = 'http://www.hetangsmart.com'
    s.requires_arc     = true
    s.documentation_url = 'https://github.com/htangsmart/FitCloudPro-SDK-iOS/blob/{s.version}/FitCloudDFUKit/README.md'
    s.screenshot       = 'https://github.com/htangsmart/FitCloudPro-SDK-iOS/{s.version}/FitCloudDFUKit/logo.png'

    s.platform         = :ios, '8.0'
    s.frameworks       = 'Foundation', 'CoreBluetooth', 'CoreGraphics'

    s.vendored_frameworks = 'FitCloudDFUKit/FitCloudDFUKit.framework'
    s.resource = 'FitCloudDFUKit/FitCloudDFUKit.bundle'

    s.swift_version = '5.0'

    s.pod_target_xcconfig = { 'OTHER_LDFLAGS' => '-lObjC' }


end
