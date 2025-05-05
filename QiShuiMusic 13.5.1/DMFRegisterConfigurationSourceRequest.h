@interface DMFRegisterConfigurationSourceRequest : DMFTaskRequest
@property (nonatomic) NSString configurationSourceName;
@property (nonatomic) NSString organizationIdentifier;
@property (nonatomic) NSString machServiceName;
@property (nonatomic) NSXPCListenerEndpoint listenerEndpoint;
@property (nonatomic) DMFReportingRequirements reportingRequirements;
- (void)setConfigurationSourceName:;
- (void)setOrganizationIdentifier:;
- (void)setListenerEndpoint:;
- (id)machServiceName;
- (id)organizationIdentifier;
- (id)initWithCoder:;
- (id)reportingRequirements;
- (void)encodeWithCoder:;
- (id)configurationSourceName;
- (void).cxx_destruct;
- (void)setMachServiceName:;
- (void)setReportingRequirements:;
- (id)listenerEndpoint;
+ (BOOL)supportsSecureCoding;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)isPermittedOnSystemConnection;
@end
