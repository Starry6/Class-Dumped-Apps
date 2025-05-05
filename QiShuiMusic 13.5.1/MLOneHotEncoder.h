@interface MLOneHotEncoder : MLModel
@property (nonatomic) NSOrderedSet featureEncoding;
@property (nonatomic) BOOL ouputSparse;
@property (nonatomic) BOOL handleUnknown;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelMetadata metadata;
- (id)predictionFromFeatures:options:error:;
- (void).cxx_destruct;
- (id)initWith:dataTransformerName:ouputSparse:handleUnknown:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:configuration:;
- (id)encodeFeatureValue:;
- (id)unknownDenseVector;
- (id)encodeFeatureValueIntString:;
- (id)featureEncoding;
- (BOOL)ouputSparse;
- (BOOL)handleUnknown;
+ (id)loadModelFromSpecification:configuration:error:;
+ (id)featureEncoderFrom:inputDescription:orderedInputFeatureNames:;
+ (id)featureEncoderFrom:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
+ (id)featureEncoderFrom:dataTransformerName:ouputSparse:handleUnknown:inputDescription:outputDescription:orderedInputFeatureNames:orderedOutputFeatureNames:;
@end
