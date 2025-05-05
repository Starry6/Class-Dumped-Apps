@interface WFContextualActionRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) <WFContextualActionRunnerClientDelegate> delegate;
- (void)start;
- (void)handleWorkflowRunResult:completion:;
- (id)initWithContextualAction:actionContext:;
@end
