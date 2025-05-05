@interface WFContextualActionRunRequest : WFWorkflowRunRequest
@property (nonatomic) WFContentCollection input;
@property (nonatomic) WFContextualAction action;
@property (nonatomic) WFContextualActionContext actionContext;
- (id)queueIdentifier;
- (id)input;
- (void)setInput:;
- (id)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)actionContext;
- (id)initWithAction:actionContext:;
- (void)getInputWithCompletionHandler:;
+ (BOOL)supportsSecureCoding;
@end
