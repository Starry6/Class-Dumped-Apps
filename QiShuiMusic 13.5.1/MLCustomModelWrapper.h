@interface MLCustomModelWrapper : MLModel
@property (nonatomic) NSObject<MLCustomModel> customModel;
- (id)predictionFromFeatures:options:error:;
- (id)predictionsFromBatch:options:error:;
- (void).cxx_destruct;
- (id)initWithModelDescription:customModel:configuration:;
- (id)customModel;
- (void)setCustomModel:;
@end
