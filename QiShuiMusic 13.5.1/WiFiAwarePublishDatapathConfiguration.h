@interface WiFiAwarePublishDatapathConfiguration : NSObject
@property (nonatomic) q serviceType;
@property (nonatomic) WiFiAwarePublishDatapathSecurityConfiguration securityConfiguration;
@property (nonatomic) WiFiAwarePublishDatapathServiceSpecificInfo serviceSpecificInfo;
- (long long)serviceType;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)initWithServiceType:securityConfiguration:;
- (id)serviceSpecificInfo;
- (void)setServiceSpecificInfo:;
- (BOOL)serviceSpecificInfoEqual:;
- (BOOL)securityConfigurationEqual:;
- (id)securityConfiguration;
+ (BOOL)supportsSecureCoding;
@end
