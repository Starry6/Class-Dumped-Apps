@interface MDLLightProbe : MDLLight
@property (nonatomic) MDLTexture reflectiveTexture;
@property (nonatomic) MDLTexture irradianceTexture;
@property (nonatomic) Q sphericalHarmonicsLevel;
@property (nonatomic) NSData sphericalHarmonicsCoefficients;
- (void)setTransform:;
- (id)transform;
- (void).cxx_destruct;
- (id)sphericalHarmonicsCoefficients;
- (void)setSphericalHarmonicsCoefficients:;
- (unsigned long long)sphericalHarmonicsLevel;
- (id)initWithReflectiveTexture:irradianceTexture:;
- (void)generateIrradianceTextureFromReflective;
- (void)generateSphericalHarmonicsFromIrradiance:;
- (id)reflectiveTexture;
- (id)irradianceTexture;
+ (id)lightProbeWithSCNLight:node:;
+ (id)calculateIrradianceGradientUsingSamples:ofSize:fromSH:withLevel:;
+ (id)sampleSHAt:usingCoefficients:withLevel:;
+ (id)lightProbeWithTextureSize:forLocation:lightsToConsider:objectsToConsider:reflectiveCubemap:irradianceCubemap:;
@end
