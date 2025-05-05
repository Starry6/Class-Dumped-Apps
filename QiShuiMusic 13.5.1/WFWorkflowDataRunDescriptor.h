@interface WFWorkflowDataRunDescriptor : WFWorkflowRunDescriptor
@property (nonatomic) NSData workflowData;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithWorkflowData:;
- (id)workflowData;
+ (BOOL)supportsSecureCoding;
@end
