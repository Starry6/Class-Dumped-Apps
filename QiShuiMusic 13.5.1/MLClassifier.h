@interface MLClassifier : MLModel
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelMetadata metadata;
- (id)classify:options:error:;
- (id)classLabels;
- (id)predictionFromFeatures:options:error:;
- (id)initWithDescription:configuration:error:;
- (id)initDescriptionOnlyWithSpecification:configuration:error:;
- (id)classifierResultFromOutputFeatures:error:;
+ (id)predictionFromFeatures:classifier:options:error:;
@end
