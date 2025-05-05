@interface WFWorkflowRunDescriptor : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
+ (BOOL)supportsSecureCoding;
@end
