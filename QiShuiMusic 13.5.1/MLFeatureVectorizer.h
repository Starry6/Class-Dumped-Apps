@interface MLFeatureVectorizer : MLModel
@property (nonatomic) NSArray columnNameEncoding;
@property (nonatomic) NSArray dimensionEncoding;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)columnNameEncoding;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)vectorizeOneHotEncoderDict:index:error:;
- (id)dimensionEncoding;
- (id)initWith:dimensionEncoding:dataTransformerName:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:;
- (id).cxx_construct;
+ (id)loadModelFromSpecification:configuration:error:;
@end
