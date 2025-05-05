@interface WFActionExtensionWorkflowRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) NSDictionary javaScriptRunners;
- (void).cxx_destruct;
- (id)initWithWorkflowIdentifier:input:javaScriptRunners:;
- (id)javaScriptRunners;
- (void)setJavaScriptRunners:;
@end
