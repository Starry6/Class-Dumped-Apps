@interface MDLScatteringFunction : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) MDLMaterialProperty baseColor;
@property (nonatomic) MDLMaterialProperty emission;
@property (nonatomic) MDLMaterialProperty specular;
@property (nonatomic) MDLMaterialProperty materialIndexOfRefraction;
@property (nonatomic) MDLMaterialProperty interfaceIndexOfRefraction;
@property (nonatomic) MDLMaterialProperty normal;
@property (nonatomic) MDLMaterialProperty ambientOcclusion;
@property (nonatomic) MDLMaterialProperty ambientOcclusionScale;
- (id)init;
- (void)setName:;
- (id)normal;
- (void).cxx_destruct;
- (id)name;
- (id).cxx_construct;
- (id)baseColor;
- (id)ambientOcclusion;
- (id)emission;
- (id)specular;
- (id)materialIndexOfRefraction;
- (id)interfaceIndexOfRefraction;
- (id)ambientOcclusionScale;
@end
