@interface WFSpringBoardWorkflowRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) WFSpringBoardWebClipMetadata metadata;
@property (nonatomic) WFSpringBoardWorkflowRunnerClient retainedSelf;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)retainedSelf;
- (void)setRetainedSelf:;
- (void)start;
- (id)metadata;
- (void)setMetadata:;
- (void)workflowRunnerClient:didFinishRunningWorkflowWithOutput:error:cancelled:;
- (void).cxx_destruct;
- (id)initWithWorkflowIdentifier:;
- (id)initWithWebClipMetadata:;
- (void)showSingleStepCompletionWithCompletion:;
@end
