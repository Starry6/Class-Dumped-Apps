@interface MLItemSimilarityRecommender : MLModel
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelMetadata metadata;
- (id)predictionFromFeatures:options:error:;
- (id)modelData;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)_itemForIndex:error:;
- (BOOL)_mapItemSequence:dest:error:;
+ (id)compileSpecification:toArchive:options:error:;
+ (id)compiledVersionForSpecification:options:error:;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)loadModelFromSpecificationWithCompilationOptions:options:error:;
+ (id)loadModelFromCompiledArchive:modelVersionInfo:compilerVersionInfo:configuration:error:;
@end
