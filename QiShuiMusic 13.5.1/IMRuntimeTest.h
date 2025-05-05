@interface IMRuntimeTest : NSObject
@property (nonatomic) IMRuntimeTestRun testRun;
@property (nonatomic) @? completion;
- (void)setUp;
- (id)completion;
- (id)logHandle;
- (void)setCompletion:;
- (id)testName;
- (void)startTest;
- (void)dispatchAfter:block:;
- (void)tearDown;
- (void).cxx_destruct;
- (void)testLog:;
- (void)finishTest;
- (Class)testRunClass;
- (void)runTest:;
- (void)finishTestAfterInterval:;
- (id)testRun;
- (void)setTestRun:;
+ (id)logHandle;
+ (id)testName;
+ (void)testLog:;
@end
