@interface MLAppleImageFeatureExtractor : MLModel
@property (nonatomic) MLAppleImageFeatureExtractorParameters parameters;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (id)parameters;
- (void).cxx_destruct;
- (id)featureValueFromScenePrint:elementSize:;
- (id)initWithParameters:modelDescription:featureExtractorType:configuration:error:;
- (id)computeScenePrintFeatures:handle:useCPUOnly:error:;
- (id)featureValueFromObjectPrint:key:shape:;
+ (id)loadModelFromSpecification:configuration:error:;
@end
