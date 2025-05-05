@interface LNPerformActionConnectionOperation : LNRuntimeAssertionsTakingConnectionOperation
@property (nonatomic) LNAction action;
@property (nonatomic) LNActionExecutor executor;
@property (nonatomic) @? completionHandler;
@property (nonatomic) LNSuccessResult result;
- (id)result;
- (void)start;
- (void)setCompletionHandler:;
- (id)action;
- (void).cxx_destruct;
- (void)finishWithError:;
- (double)timeout;
- (id)executor;
- (void)setResult:;
- (id)completionHandler;
- (id)initWithConnectionInterface:action:executor:executorActivity:completionHandler:;
@end
