@interface MDLMaterial : NSObject
@property (nonatomic) MDLScatteringFunction scatteringFunction;
@property (nonatomic) NSString name;
@property (nonatomic) MDLMaterial baseMaterial;
@property (nonatomic) Q count;
@property (nonatomic) Q materialFace;
- (void)setProperty:;
- (void)removeAllProperties;
- (id)init;
- (void)setName:;
- (unsigned long long)countByEnumeratingWithState:objects:count:;
- (id)objectAtIndexedSubscript:;
- (id)objectForKeyedSubscript:;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)count;
- (void)removeProperty:;
- (id)scatteringFunction;
- (id)propertyWithSemantic:;
- (id)propertyNamed:;
- (id)initWithName:scatteringFunction:;
- (unsigned long long)materialFace;
- (void)setScatteringFunction:;
- (void)resolveTexturesWithResolver:;
- (void)loadTexturesUsingArchiveAssetResolver:cache:;
- (void)loadTexturesUsingResolver:cache:;
- (void)loadTexturesUsingResolver:;
- (id)initWithName:physicallyPlausibleBSDF:;
- (void)conformToMatProperties;
- (id)propertiesWithSemantic:;
- (id)bsdf;
- (void)encodeMaterialWithCoder:allocator:;
- (id)baseMaterial;
- (void)setBaseMaterial:;
- (void)setMaterialFace:;
+ (id)materialWithSCNMaterial:;
+ (id)decodeMaterialWithCoder:allocator:;
@end
