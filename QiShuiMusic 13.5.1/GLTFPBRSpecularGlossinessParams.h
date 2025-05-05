@interface GLTFPBRSpecularGlossinessParams : NSObject
@property (nonatomic)  diffuseFactor;
@property (nonatomic) GLTFTextureParams diffuseTexture;
@property (nonatomic)  specularFactor;
@property (nonatomic) float glossinessFactor;
@property (nonatomic) GLTFTextureParams specularGlossinessTexture;
- (id)diffuseFactor;
- (id)diffuseTexture;
- (float)glossinessFactor;
- (void)setDiffuseFactor:;
- (void)setDiffuseTexture:;
- (void)setGlossinessFactor:;
- (void)setSpecularFactor:;
- (void)setSpecularGlossinessTexture:;
- (id)specularFactor;
- (id)specularGlossinessTexture;
- (id)init;
- (void).cxx_destruct;
@end
