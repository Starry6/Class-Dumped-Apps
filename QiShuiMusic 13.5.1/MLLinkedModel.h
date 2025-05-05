@interface MLLinkedModel : MLModel
@property (nonatomic) MLModel linkedModel;
@property (nonatomic) NSString modelFileName;
@property (nonatomic) NSString modelSearchPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)parameterValueForKey:error:;
- (id)predictionFromFeatures:options:error:;
- (id)predictionsFromBatch:options:error:;
- (void).cxx_destruct;
- (void)updateParameterDescriptionsByUnarchivingSpecification:;
- (id)initWithLinkedModel:modelFileName:modelSearchPath:configuration:;
- (id)linkedModel;
- (void)setLinkedModel:;
- (id)modelFileName;
- (void)setModelFileName:;
- (id)modelSearchPath;
- (void)setModelSearchPath:;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)findFile:inSearchPath:basePath:;
+ (BOOL)areFeaturesIn:modelNamed:aSubsetOf:error:;
@end
