@interface WiFiAwareSubscribeConfiguration : NSObject
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSData serviceSpecificInfo;
@property (nonatomic) q authenticationType;
@property (nonatomic) WiFiAwareFastDiscoveryConfiguration fastDiscoveryConfiguration;
- (id)serviceName;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithServiceName:;
- (BOOL)isEqual:;
- (long long)authenticationType;
- (void)setAuthenticationType:;
- (id)serviceSpecificInfo;
- (void)setServiceSpecificInfo:;
- (BOOL)serviceSpecificInfoEqual:;
- (id)fastDiscoveryConfiguration;
- (void)setFastDiscoveryConfiguration:;
- (id)initWithServiceName:serviceSpecificInfo:;
- (BOOL)fastDiscoveryConfigEqual:;
+ (BOOL)supportsSecureCoding;
@end
