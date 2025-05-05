@interface MLDictVectorizer : MLModel
@property (nonatomic) NSOrderedSet categoryName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)categoryName;
- (id)initWith:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:error:;
- (id)constructDictionary:error:;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)categoryName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:error:;
+ (id)categoryName:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:error:;
@end
