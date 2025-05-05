@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject
@property (nonatomic) NSDictionary organizationsByIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)organizationsByIdentifier;
- (void)setOrganizationsByIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
