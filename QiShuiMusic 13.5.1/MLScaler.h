@interface MLScaler : MLModel
@property (nonatomic) MLFeatureValue shiftValue;
@property (nonatomic) MLFeatureValue scaleValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)initWith:scaleValue:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:error:;
- (id)shiftValue;
- (id)scaleValue;
+ (id)loadModelFromSpecification:configuration:error:;
@end
