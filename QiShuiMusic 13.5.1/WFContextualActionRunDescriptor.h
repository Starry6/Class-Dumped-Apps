@interface WFContextualActionRunDescriptor : WFWorkflowRunDescriptor
@property (nonatomic) WFContextualAction action;
@property (nonatomic) WFContextualActionContext context;
- (id)context;
- (id)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithAction:context:;
+ (BOOL)supportsSecureCoding;
@end
