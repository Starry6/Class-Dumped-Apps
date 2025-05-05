@interface WFShojiSystemActionsRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) <WFShojiSystemActionsRunnerClientDelegate> delegate;
- (void)handleWorkflowRunResult:completion:;
- (id)initWithContextualAction:;
@end
