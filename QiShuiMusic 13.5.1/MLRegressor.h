@interface MLRegressor : MLModel
@property (nonatomic) MLModelDescription modelDescription;
@property (nonatomic) MLModelMetadata metadata;
- (id)regress:options:error:;
- (id)predictionFromFeatures:options:error:;
- (id)initWithDescription:configuration:error:;
- (id)regressorResultFromOutputFeatures:error:;
- (id)initDescriptionOnlyWithSpecification:configuration:error:;
+ (id)predictionFromFeatures:regressor:options:error:;
@end
