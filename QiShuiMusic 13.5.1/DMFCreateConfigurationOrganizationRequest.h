@interface DMFCreateConfigurationOrganizationRequest : DMFTaskRequest
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSString organizationDisplayName;
@property (nonatomic) NSString organizationType;
- (void)setOrganizationType:;
- (void)setOrganizationIdentifier:;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)organizationDisplayName;
- (id)organizationType;
- (void)setOrganizationDisplayName:;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
