@interface MLCategoricalMapping : MLModel
@property (nonatomic) NSDictionary mapping;
@property (nonatomic) MLFeatureValue valueOnUnknown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)mapping;
- (id)initWithMapping:valueOnUnknown:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:;
- (id)mapFeature:error:;
- (id)valueOnUnknown;
+ (id)loadModelFromSpecification:configuration:error:;
@end
