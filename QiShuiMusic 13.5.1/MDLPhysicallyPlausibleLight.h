@interface MDLPhysicallyPlausibleLight : MDLLight
@property (nonatomic) float attenuationFalloffExponent;
@property (nonatomic) ^{CGColor=} color;
@property (nonatomic) float lumens;
@property (nonatomic) float innerConeAngle;
@property (nonatomic) float outerConeAngle;
@property (nonatomic) float attenuationStartDistance;
@property (nonatomic) float attenuationEndDistance;
- (id)init;
- (void)setColor:;
- (id)color;
- (float)attenuationEndDistance;
- (void)setColorByTemperature:;
- (void)setInnerConeAngle:;
- (void)setOuterConeAngle:;
- (void)setAttenuationEndDistance:;
- (void)setAttenuationStartDistance:;
- (void)setAttenuationFalloffExponent:;
- (void)setLumens:;
- (float)lumens;
- (float)innerConeAngle;
- (float)outerConeAngle;
- (float)attenuationStartDistance;
- (float)attenuationFalloffExponent;
@end
