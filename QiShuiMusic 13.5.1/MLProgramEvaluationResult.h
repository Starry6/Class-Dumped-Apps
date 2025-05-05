@interface MLProgramEvaluationResult : NSObject
@property (nonatomic) double loss;
@property (nonatomic) <MLBatchProvider> evaluationMetrics;
- (id)init;
- (void).cxx_destruct;
- (double)loss;
- (void)setLoss:;
- (id)evaluationMetrics;
- (void)setEvaluationMetrics:;
@end
