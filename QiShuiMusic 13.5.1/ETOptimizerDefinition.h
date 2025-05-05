@interface ETOptimizerDefinition : NSObject
@property (nonatomic) q type;
@property (nonatomic) NSDictionary optimizationParameters;
- (long long)type;
- (void).cxx_destruct;
- (id)initWithOptimizationAlgorithm:parameters:error:;
- (id)optimizationParameters;
@end
