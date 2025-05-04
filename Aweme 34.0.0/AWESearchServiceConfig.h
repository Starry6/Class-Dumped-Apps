@interface AWESearchServiceConfig : AWEBaseApiModel
@property (nonatomic) NSString serviceName;
@property (nonatomic) NSString serviceID;
@property (nonatomic) q priority;
@property (nonatomic) NSDictionary serviceConfig;
@property (nonatomic) NSString sepecificClass;
- (void)setServiceConfig:;
- (id)serviceConfig;
- (id)sepecificClass;
- (void)setSepecificClass:;
- (long long)priority;
- (void)setServiceID:;
- (void)setServiceName:;
- (id)serviceID;
- (void)setPriority:;
- (void).cxx_destruct;
- (id)serviceName;
+ (id)JSONKeyPathsByPropertyKey;
@end
