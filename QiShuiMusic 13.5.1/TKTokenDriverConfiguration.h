@interface TKTokenDriverConfiguration : NSObject
@property (nonatomic) NSString classID;
@property (nonatomic) NSDictionary tokenConfigurations;
- (id)beginTransaction;
- (void).cxx_destruct;
- (id)classID;
- (id)initWithClassID:configurationConnection:;
- (id)tokenConfigurations;
- (id)addTokenConfigurationForTokenInstanceID:;
- (id)createTokenConfigurationWithInstanceID:persistent:;
- (void)removeTokenConfigurationForTokenInstanceID:;
+ (id)driverConfigurationsWithClient:;
+ (id)driverConfigurations;
@end
