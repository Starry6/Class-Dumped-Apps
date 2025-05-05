@interface WFLinkActionRunDescriptor : WFWorkflowRunDescriptor
@property (nonatomic) LNFullyQualifiedActionIdentifier identifier;
@property (nonatomic) LNAction action;
@property (nonatomic) LNActionMetadata metadata;
@property (nonatomic) BOOL isAutoShortcut;
- (id)metadata;
- (id)identifier;
- (id)action;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithIdentifier:action:metadata:isAutoShortcut:;
- (id)initWithIdentifier:action:metadata:;
- (BOOL)isAutoShortcut;
+ (BOOL)supportsSecureCoding;
@end
