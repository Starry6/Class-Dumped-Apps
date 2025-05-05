@interface MDLPhotometricLight : MDLPhysicallyPlausibleLight
@property (nonatomic) MDLTexture lightCubeMap;
@property (nonatomic) Q sphericalHarmonicsLevel;
@property (nonatomic) NSData sphericalHarmonicsCoefficients;
- (void).cxx_destruct;
- (id)sphericalHarmonicsCoefficients;
- (void)setSphericalHarmonicsCoefficients:;
- (id)initWithIESProfile:;
- (void)generateCubemapFromLight:;
- (void)computeLumens;
- (float)computeInnerAngle;
- (id)generateTexture:;
- (id)computeSceneKitRenderingTexture:;
- (void)generateSphericalHarmonicsFromLight:;
- (id)evaluatedColorFromSHVector:;
- (id)lightCubeMap;
- (unsigned long long)sphericalHarmonicsLevel;
@end
