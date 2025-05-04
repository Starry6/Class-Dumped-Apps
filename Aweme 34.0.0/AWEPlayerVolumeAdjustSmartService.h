@interface AWEPlayerVolumeAdjustSmartService : HTSService
@property (nonatomic) <FurionSmartCommonServiceProtocol> smartCommonService;
@property (nonatomic) q skipTimes;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) q lastRunTime;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)runWithConfigBuilder:completion:;
- (void)setSmartCommonService:;
- (id)smartCommonService;
- (long long)skipTimes;
- (void)setSkipTimes:;
- (BOOL)ignoreRun:;
- (void)setIsRunning:;
- (id)init;
- (void)prepare;
- (BOOL)enabled;
- (long long)lastRunTime;
- (void).cxx_destruct;
- (void)setLastRunTime:;
- (BOOL)isRunning;
- (id)serviceName;
- (id)lastResult;
+ (id)abTestConfig;
+ (id)sharedInstance;
@end
