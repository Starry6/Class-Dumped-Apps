@interface WFWorkflowDatabaseRunDescriptor : WFWorkflowRunDescriptor
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString name;
- (id)identifier;
- (id)initWithName:;
- (id)initWithCoder:;
- (id)initWithIdentifier:name:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
