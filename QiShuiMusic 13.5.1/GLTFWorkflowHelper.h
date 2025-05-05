@interface GLTFWorkflowHelper : NSObject
@property (nonatomic) GLTFPBRSpecularGlossinessParams specularGlossiness;
@property (nonatomic)  baseColorFactor;
@property (nonatomic) GLTFTextureParams baseColorTexture;
@property (nonatomic) float metallicFactor;
@property (nonatomic) float roughnessFactor;
@property (nonatomic) GLTFTextureParams metallicRoughnessTexture;
- (float)roughnessFactor;
- (id)baseColorFactor;
- (id)baseColorTexture;
- (id)initWithSpecularGlossiness:;
- (float)metallicFactor;
- (id)metallicRoughnessTexture;
- (id)newImageFromTexture:;
- (id)newTextureFromImage:device:;
- (void)setBaseColorFactor:;
- (void)setBaseColorTexture:;
- (void)setMetallicFactor:;
- (void)setMetallicRoughnessTexture:;
- (void)setRoughnessFactor:;
- (void)setSpecularGlossiness:;
- (id)specularGlossiness;
- (void).cxx_destruct;
- (void)convert;
@end
