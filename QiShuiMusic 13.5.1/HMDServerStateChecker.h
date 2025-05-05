@interface HMDServerStateChecker : NSObject
- (id)_getReporterURLPath;
- (void)_longAvoidanceStrategyWithCurrentTime:;
- (void)_shortAvoidanceStrategyWithCurrentTime:;
- (void)_updateServerCheckerByQuota:;
- (void)_updateStateFromServer;
- (void)checkIfDegradedwithResponse:;
- (BOOL)dropAllData;
- (BOOL)dropData;
- (id)initWithReporter:forApp:;
- (id)redirectHost;
- (unsigned long long)updateStateWithResult:statusCode:;
- (void).cxx_destruct;
- (BOOL)isServerAvailable;
+ (id)stateCheckerWithReporter:;
+ (id)stateCheckerWithReporter:forApp:;
@end
