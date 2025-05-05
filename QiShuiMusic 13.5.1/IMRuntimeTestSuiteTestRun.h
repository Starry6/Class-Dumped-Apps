@interface IMRuntimeTestSuiteTestRun : IMRuntimeTestRun
@property (nonatomic) NSArray testRuns;
- (id)init;
- (void).cxx_destruct;
- (void)addTestRun:;
- (id)testRuns;
@end
