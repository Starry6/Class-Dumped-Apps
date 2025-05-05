@interface SNKShotFeaturizationResult : NSObject
@property (nonatomic) NSArray trainingDataEmbeddings;
@property (nonatomic) NSArray trainingDataLabels;
@property (nonatomic) NSArray validationDataEmbeddings;
@property (nonatomic) NSArray validationDataLabels;
@property (nonatomic) MLMultiArray exemplar;
@property (nonatomic) {?=qiIq} inferenceWindowSize;
- (void).cxx_destruct;
- (id)exemplar;
- (void)setExemplar:;
- (id)inferenceWindowSize;
- (void)setInferenceWindowSize:;
- (id)trainingDataEmbeddings;
- (void)setTrainingDataEmbeddings:;
- (id)trainingDataLabels;
- (void)setTrainingDataLabels:;
- (id)validationDataEmbeddings;
- (void)setValidationDataEmbeddings:;
- (id)validationDataLabels;
- (void)setValidationDataLabels:;
@end
