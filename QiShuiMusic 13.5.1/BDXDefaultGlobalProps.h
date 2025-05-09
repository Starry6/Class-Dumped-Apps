@interface BDXDefaultGlobalProps : NSObject
@property (nonatomic) NSDictionary defaultGlobalPropsCache;
@property (nonatomic) NSDictionary lynxGlobalPropsCache;
@property (nonatomic) NSNumber screenWidth;
@property (nonatomic) NSNumber screenHeight;
@property (nonatomic) NSNumber statusBarHeight;
@property (nonatomic) NSNumber bottomHeight;
@property (nonatomic) NSNumber topHeight;
@property (nonatomic) NSNumber contentHeight;
@property (nonatomic) NSNumber contentWidth;
@property (nonatomic) NSNumber safeAreaHeight;
@property (nonatomic) NSDictionary safeArea;
@property (nonatomic) NSNumber density;
@property (nonatomic) NSNumber isIPhoneX;
@property (nonatomic) NSNumber isGLES3Support;
@property (nonatomic) NSNumber isAccessable;
@property (nonatomic) NSNumber is32;
@property (nonatomic) NSNumber isPad;
@property (nonatomic) NSNumber isLandscape;
@property (nonatomic) NSString os;
@property (nonatomic) NSString osVersion;
@property (nonatomic) NSString channel;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString aid;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString language;
@property (nonatomic) NSString bulletVersion;
@property (nonatomic) NSString platform;
@property (nonatomic) NSString deviceBrand;
@property (nonatomic) NSString deviceId;
@property (nonatomic) NSString updateVersionCode;
@property (nonatomic) NSNumber platformType;
@property (nonatomic) NSString lynxVersion;
- (void)setDeviceBrand:;
- (void)setLynxVersion:;
- (id)bulletVersion;
- (id)defaultGlobalPropsCache;
- (id)defaultGlobalPropsDict;
- (id)defaultGlobalPropsDictWithEngineType:;
- (id)is32;
- (id)isAccessable;
- (id)isGLES3Support;
- (id)isIPhoneX;
- (id)lynxGlobalPropsCache;
- (id)lynxVersion;
- (id)p_updateSafeArea;
- (id)p_updateStatusBarHeight;
- (id)p_updateTopHeight;
- (id)safeArea;
- (id)safeAreaHeight;
- (void)saveDefautlGlobalProps;
- (void)setBulletVersion:;
- (void)setDefaultGlobalPropsCache:;
- (void)setIs32:;
- (void)setIsAccessable:;
- (void)setIsGLES3Support:;
- (void)setIsIPhoneX:;
- (void)setLynxGlobalPropsCache:;
- (void)setSafeArea:;
- (void)setSafeAreaHeight:;
- (void)setTopHeight:;
- (void)setUpdateVersionCode:;
- (id)updateVersionCode;
- (void)updateWithScreenOrientationDidChange;
- (id)os;
- (id)isPad;
- (void)setAppVersion:;
- (id)contentHeight;
- (id)screenWidth;
- (void)setDensity:;
- (void)setChannel:;
- (id)appVersion;
- (void)setScreenHeight:;
- (id)screenHeight;
- (id)deviceId;
- (void)setStatusBarHeight:;
- (void)setDeviceId:;
- (id)init;
- (id)osVersion;
- (void)setPlatform:;
- (id)statusBarHeight;
- (id)channel;
- (void)setLanguage:;
- (id)density;
- (id)language;
- (void)setContentWidth:;
- (id)isLandscape;
- (void)setAppName:;
- (id)contentWidth;
- (id)appName;
- (void)setOs:;
- (void)setIsLandscape:;
- (void)setOsVersion:;
- (id)platform;
- (void).cxx_destruct;
- (void)setIsPad:;
- (void)setScreenWidth:;
- (void)setContentHeight:;
- (id)topHeight;
- (id)platformType;
- (void)setPlatformType:;
- (id)bottomHeight;
- (void)setBottomHeight:;
- (id)deviceBrand;
- (void)setAid:;
- (id)aid;
@end
