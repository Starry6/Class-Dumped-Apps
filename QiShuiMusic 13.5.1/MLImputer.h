@interface MLImputer : MLModel
@property (nonatomic) MLFeatureValue imputeValue;
@property (nonatomic) MLFeatureValue replaceValue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)initWith:imputeValue:replaceValue:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:error:;
- (id)imputeValue;
- (id)replaceValue;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)imputeValueFrom:replaceValue:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:error:;
+ (id)imputeValueFrom:replaceValue:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:error:;
@end
