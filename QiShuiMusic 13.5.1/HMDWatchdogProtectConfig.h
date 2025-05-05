@interface HMDWatchdogProtectConfig : HMDTrackerConfig
@property (nonatomic) double timeoutInterval;
@property (nonatomic) double launchThreshold;
@property (nonatomic) NSArray typeList;
@property (nonatomic) NSArray dynamicProtect;
@property (nonatomic) NSArray dynamicProtectAnyThread;
- (double)launchThreshold;
- (id)dynamicProtect;
- (id)dynamicProtectAnyThread;
- (id)getModule;
- (void)setDynamicProtect:;
- (void)setDynamicProtectAnyThread:;
- (void)setLaunchThreshold:;
- (void)setTypeList:;
- (id)typeList;
- (double)timeoutInterval;
- (void).cxx_destruct;
- (void)setTimeoutInterval:;
+ (id)hmd_attributeMapDictionary;
+ (id)configKey;
@end
