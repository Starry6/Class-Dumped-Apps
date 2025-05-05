@interface WFWidgetWorkflowRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) WFWorkflowRunningContext context;
- (id)initWithWorkflowIdentifier:;
@end
