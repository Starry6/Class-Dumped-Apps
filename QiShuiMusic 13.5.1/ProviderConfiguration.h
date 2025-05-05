@interface ProviderConfiguration : NSObject
@property (nonatomic) BOOL providerOff;
@property (nonatomic) BOOL socialEngineeringThreatTypeOff;
@property (nonatomic) BOOL malwareThreatTypeOff;
@property (nonatomic) BOOL unwantedSoftwareThreatTypeOff;
@property (nonatomic) BOOL proxyOff;
- (id)init;
- (BOOL)isEqualToConfiguration:;
- (void).cxx_destruct;
- (id)initWithConfiguration:;
- (BOOL)providerOff;
- (void)_configureToUseDefaultValues;
- (void)_configureToBeOff;
- (id)_currentRegionCode;
- (void)_parseConfiguration:;
- (void)setProviderOff:;
- (BOOL)socialEngineeringThreatTypeOff;
- (BOOL)malwareThreatTypeOff;
- (BOOL)unwantedSoftwareThreatTypeOff;
- (BOOL)proxyOff;
@end
