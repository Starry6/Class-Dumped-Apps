@interface WBSCyclerTestRunner : NSObject
@property (nonatomic) <WBSCyclerTestSuite> testSuite;
@property (nonatomic) <WBSCyclerTestTarget> target;
@property (nonatomic) BOOL running;
- (id)init;
- (void)dealloc;
- (BOOL)isRunning;
- (void)_stop;
- (id)_descriptionForErrorCode:;
- (id)testSuite;
- (void).cxx_destruct;
- (id)target;
- (void)runWithCompletionHandler:;
- (id)_errorWithCode:;
- (id)initWithTestSuite:target:;
- (void)requestStop;
- (void)handleRequest:completionHandler:;
- (void)_performNextIterationWithCompletionHandler:;
- (void)_handleNextPendingRequestWithCompletionHandler:;
@end
