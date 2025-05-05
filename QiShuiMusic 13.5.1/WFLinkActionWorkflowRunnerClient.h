@interface WFLinkActionWorkflowRunnerClient : WFWorkflowRunnerClient
@property (nonatomic) WFLinkActionWorkflowRunnerClient retainedSelf;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)retainedSelf;
- (void)setRetainedSelf:;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)executor:didFinishWithResult:error:;
- (void)executor:needsActionConfirmationWithRequest:;
- (void)executor:needsConfirmationWithRequest:;
- (void)executor:needsDisambiguationWithRequest:;
- (void)executor:needsValueWithRequest:;
- (id)initWithIdentifier:action:metadata:;
@end
