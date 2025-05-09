@interface BDAPUAppInfoMethodResultModel : BDXBridgeModel
@property (nonatomic) NSString appName;
@property (nonatomic) NSString innerAppName;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString aid;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString deviceModel;
@property (nonatomic) NSString deviceType;
@property (nonatomic) NSString devicePlatform;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString versionCode;
@property (nonatomic) NSString language;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString idfa;
@property (nonatomic) NSString installID;
@property (nonatomic) NSNumber statusBarHeight;
@property (nonatomic) NSString netType;
@property (nonatomic) NSString carrier;
@property (nonatomic) NSString appTheme;
@property (nonatomic) NSNumber isTeenMode;
@property (nonatomic) NSNumber ironManSupported;
- (id)appTheme;
- (id)idfa;
- (id)innerAppName;
- (id)ironManSupported;
- (id)isTeenMode;
- (void)setAppTheme:;
- (void)setIdfa:;
- (void)setInnerAppName:;
- (void)setInstallID:;
- (void)setIronManSupported:;
- (void)setIsTeenMode:;
- (void)setNetType:;
- (id)deviceType;
- (void)setAppVersion:;
- (id)deviceModel;
- (void)setChannel:;
- (id)appVersion;
- (void)setDeviceType:;
- (id)deviceId;
- (void)setStatusBarHeight:;
- (void)setDeviceId:;
- (id)osVersion;
- (id)statusBarHeight;
- (id)channel;
- (void)setLanguage:;
- (id)language;
- (id)userId;
- (id)installID;
- (void)setAppName:;
- (id)appName;
- (void)setAppID:;
- (void)setOsVersion:;
- (id)appID;
- (void).cxx_destruct;
- (void)setUserId:;
- (void)setDeviceModel:;
- (id)devicePlatform;
- (id)carrier;
- (void)setCarrier:;
- (void)setDevicePlatform:;
- (void)setAid:;
- (id)aid;
- (id)netType;
- (id)versionCode;
- (void)setVersionCode:;
+ (id)JSONKeyPathsByPropertyKey;
@end
