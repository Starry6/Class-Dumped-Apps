@interface MITestManager : NSObject
@property (nonatomic) Q testFlags;
@property (nonatomic) NSObject<OS_dispatch_queue> testModeQueue;
@property (nonatomic) NSMutableDictionary sourceForPID;
- (id)init;
- (void).cxx_destruct;
- (id)_testModeSentinelURL;
- (BOOL)isRunningInTestMode:outError:;
- (BOOL)_onQueue_setIsRunningInTestModeForProcessWithPID:withError:;
- (BOOL)setIsRunningInTestModeForProcessWithPID:withError:;
- (BOOL)_onQueue_clearIsRunningInTestModeForProcessWithPID:withError:;
- (BOOL)clearIsRunningInTestModeForProcessWithPID:withError:;
- (void)_onQueue_setTestFlags:;
- (void)setTestFlags:;
- (void)_onQueue_clearTestFlags:;
- (void)clearTestFlags:;
- (BOOL)testFlagsAreSet:;
- (unsigned long long)testFlags;
- (id)testModeQueue;
- (void)setTestModeQueue:;
- (id)sourceForPID;
- (void)setSourceForPID:;
+ (id)sharedInstance;
@end
