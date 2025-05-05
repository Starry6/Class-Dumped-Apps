@interface MLNormalizer : MLModel
@property (nonatomic) NSInteger norm;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (id)initWith:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:;
- (int)norm;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)inputDescriptionFrom:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
+ (id)normFrom:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
+ (id)normFrom:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
@end
