@interface IMPingTest : NSObject
@property (nonatomic) double secondsToRun;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)pingStats;
- (id)initWithAddress:wifi:;
- (void)startWithTimeout:queue:completionHandler:;
- (id)pingStats:;
- (BOOL)writeResultsToFile:error:;
- (int)_setupAndPerformPing:queue:completionHandler:;
- (void)_doPingWithSocket:address:timeToRunTestInSeconds:pingTimeout:queue:completionHandler:;
- (void)_setupReadSource:address:icmID:queue:completionHander:;
- (double)longTimeInterval;
- (double)secondsToRun;
@end
