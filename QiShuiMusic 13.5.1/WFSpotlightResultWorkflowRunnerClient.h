@interface WFSpotlightResultWorkflowRunnerClient : WFWorkflowRunnerClient
- (void).cxx_destruct;
- (id)initWithIntent:;
- (void)handleWorkflowRunResult:completion:;
- (id)initWithRunnable:surface:;
- (id)initWithIntent:executionContext:;
- (BOOL)runnableRequiresSpotlightRefresh:;
@end
