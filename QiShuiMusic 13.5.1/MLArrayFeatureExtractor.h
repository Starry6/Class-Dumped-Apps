@interface MLArrayFeatureExtractor : MLModel
@property (nonatomic) NSString arrayColumnName;
@property (nonatomic) NSArray extractIndices;
@property (nonatomic) q outputType;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (long long)outputType;
- (id)initWith:indices:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:;
- (id)arrayColumnName;
- (id)extractIndices;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)extractArrayElement:indices:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
+ (id)extractArrayElement:indices:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
@end
