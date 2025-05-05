@interface AREnvironmentTexturingTechnique : ARTechnique
@property (nonatomic) AREnvironmentProbeManager probeManager;
@property (nonatomic) BOOL networkIntialized;
@property (nonatomic) BOOL wantsHDREnvironmentTextures;
- (id)probeManager;
- (void)setProbeManager:;
- (id)processData:;
- (void).cxx_destruct;
- (id)_fullDescription;
- (BOOL)isEqual:;
- (void)prepare:;
- (void)requestResultDataAtTimestamp:context:;
- (unsigned long long)requiredSensorDataTypes;
- (id)initWithOptions:wantsHDREnvironmentTextures:;
- (BOOL)reconfigurableFrom:;
- (void)reconfigureFrom:;
- (BOOL)wantsHDREnvironmentTextures;
- (BOOL)networkIntialized;
- (void)setNetworkIntialized:;
+ (BOOL)producesResultDataForAnchorOfClass:;
@end
