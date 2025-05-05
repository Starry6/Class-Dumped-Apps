@interface MPSGraphOptimizer : NSObject
@property (nonatomic) NSArray updateOperations;
@property (nonatomic) NSDictionary variablesToGradientTensorMap;
@property (nonatomic) NSDictionary variablesToUpdateOpMap;
@property (nonatomic) MPSGraphTensor learningRateTensor;
- (void).cxx_destruct;
- (id)initWithGraph:learningRateTensor:trainableVariables:variablesToGradientTensorMap:name:;
- (id)initWithGraph:lossTensor:learningRateTensor:trainableVariables:name:;
- (id)updateOperations;
- (id)variablesToGradientTensorMap;
- (id)variablesToUpdateOpMap;
- (id)learningRateTensor;
@end
