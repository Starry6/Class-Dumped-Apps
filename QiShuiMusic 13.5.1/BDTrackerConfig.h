@interface BDTrackerConfig : NSObject
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString appBuildVersion;
@property (nonatomic) NSString appVersion;
@property (nonatomic) NSString appBuildVersion;
@property (nonatomic) NSString appID;
@property (nonatomic) NSString appName;
@property (nonatomic) NSString channel;
@property (nonatomic) @? customRequestHeaderBlock;
@property (nonatomic) @? logSettingsHTTPHeaderBlock;
@property (nonatomic) BOOL activateDeviceEnable;
@property (nonatomic) q retryTimes;
@property (nonatomic) double retryInterval;
@property (nonatomic) BOOL frequencyEnabled;
@property (nonatomic) BOOL needEncrypt;
@property (nonatomic) @? userBlock;
@property (nonatomic) @? commonParamsBlock;
@property (nonatomic) @? userUniqueIDBlock;
@property (nonatomic) @? abSDKVersionWithUserBlock;
@property (nonatomic) @? URLBlock;
@property (nonatomic) @? registerFailBlock;
@property (nonatomic) @? allowFilter;
@property (nonatomic) BOOL fixBackgroundLaunchingReport;
- (id)appBuildVersion;
- (void)setAllowFilter:;
- (void)setNeedEncrypt:;
- (id)URLBlock;
- (id)abSDKVersionWithUserBlock;
- (BOOL)activateDeviceEnable;
- (id)allowFilter;
- (id)commonParamsBlock;
- (id)customRequestHeaderBlock;
- (BOOL)fixBackgroundLaunchingReport;
- (BOOL)frequencyEnabled;
- (id)logSettingsHTTPHeaderBlock;
- (BOOL)needEncrypt;
- (id)registerFailBlock;
- (long long)retryTimes;
- (void)setAbSDKVersionWithUserBlock:;
- (void)setActivateDeviceEnable:;
- (void)setAppBuildVersion:;
- (void)setCommonParamsBlock:;
- (void)setCustomRequestHeaderBlock:;
- (void)setFixBackgroundLaunchingReport:;
- (void)setFrequencyEnabled:;
- (void)setLogSettingsHTTPHeaderBlock:;
- (void)setRegisterFailBlock:;
- (void)setRetryTimes:;
- (void)setURLBlock:;
- (void)setUserBlock:;
- (void)setUserUniqueIDBlock:;
- (id)userBlock;
- (id)userUniqueIDBlock;
- (void)setAppVersion:;
- (void)setChannel:;
- (id)appVersion;
- (id)init;
- (id)channel;
- (void)setAppName:;
- (id)appName;
- (void)setAppID:;
- (id)appID;
- (void).cxx_destruct;
- (double)retryInterval;
- (void)setRetryInterval:;
@end
