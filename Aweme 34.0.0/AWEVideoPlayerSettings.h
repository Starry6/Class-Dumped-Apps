@interface AWEVideoPlayerSettings : NSObject
- (long long)strategyRunningPreloadTaskCount;
- (void)strategyBusinessWithLiveEvent:;
- (BOOL)isStrategyExistDownloadTask;
- (long long)strategyIODemandLevel;
- (void)fetchRequestAfterLaunch;
- (void)recoverPlayerSettings;
- (void)registerStrategyPortraitsService;
- (void)dealWithVideoStrategies:;
- (id)init;
+ (id)sharedInstance;
@end
