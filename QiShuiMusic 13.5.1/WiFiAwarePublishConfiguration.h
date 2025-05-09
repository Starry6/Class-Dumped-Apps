@interface WiFiAwarePublishConfiguration : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) WiFiAwarePublishServiceSpecificInfo serviceSpecificInfo;
@property (nonatomic) BOOL furtherServiceDiscoveryRequired;
@property (nonatomic) BOOL jumboServiceDiscoveryMessages;
@property (nonatomic) q authenticationType;
@property (nonatomic) WiFiAwarePublishDatapathConfiguration datapathConfiguration;
@property (nonatomic) WiFiAwareFastDiscoveryConfiguration fastDiscoveryConfiguration;
@property (nonatomic) WiFiAwareInternetSharingConfiguration internetSharingConfiguration;
- (id)serviceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceName:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)authenticationType;
- (void)setAuthenticationType:;
- (void)setDatapathConfiguration:;
- (void)setInternetSharingConfiguration:;
- (id)serviceSpecificInfo;
- (void)setServiceSpecificInfo:;
- (BOOL)serviceSpecificInfoEqual:;
- (BOOL)datapathConfigurationEqual:;
- (BOOL)fastDiscoveryConfigurationEqual:;
- (BOOL)internetSharingConfigurationEqual:;
- (BOOL)furtherServiceDiscoveryRequired;
- (void)setFurtherServiceDiscoveryRequired:;
- (BOOL)jumboServiceDiscoveryMessages;
- (void)setJumboServiceDiscoveryMessages:;
- (id)datapathConfiguration;
- (id)fastDiscoveryConfiguration;
- (void)setFastDiscoveryConfiguration:;
- (id)internetSharingConfiguration;
+ (BOOL)supportsSecureCoding;
@end
