@interface DMFConfigurationSource : NSObject
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSString machServiceName;
@property (nonatomic) DMFReportingRequirements reportingRequirements;
- (id)init;
- (void)setOrganizationIdentifier:;
- (id)machServiceName;
- (id)identifier;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (id)reportingRequirements;
- (void)setDisplayName:;
- (id)debugDescription;
- (id)displayName;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setMachServiceName:;
- (void)setReportingRequirements:;
- (id)description;
- (void)setIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
