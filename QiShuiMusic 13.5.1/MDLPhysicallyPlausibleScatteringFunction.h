@interface MDLPhysicallyPlausibleScatteringFunction : MDLScatteringFunction
@property (nonatomic) q version;
@property (nonatomic) MDLMaterialProperty subsurface;
@property (nonatomic) MDLMaterialProperty metallic;
@property (nonatomic) MDLMaterialProperty specularAmount;
@property (nonatomic) MDLMaterialProperty specularTint;
@property (nonatomic) MDLMaterialProperty roughness;
@property (nonatomic) MDLMaterialProperty anisotropic;
@property (nonatomic) MDLMaterialProperty anisotropicRotation;
@property (nonatomic) MDLMaterialProperty sheen;
@property (nonatomic) MDLMaterialProperty sheenTint;
@property (nonatomic) MDLMaterialProperty clearcoat;
@property (nonatomic) MDLMaterialProperty clearcoatGloss;
- (id)init;
- (long long)version;
- (id)roughness;
- (void).cxx_destruct;
- (id)metallic;
- (id)subsurface;
- (id)specularAmount;
- (id)specularTint;
- (id)anisotropic;
- (id)anisotropicRotation;
- (id)sheen;
- (id)sheenTint;
- (id)clearcoat;
- (id)clearcoatGloss;
@end
