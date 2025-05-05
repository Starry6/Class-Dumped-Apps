@interface MLPMatrixLayer : MLPLayer
@property (nonatomic) Q numInputs;
@property (nonatomic) Q numOutputs;
@property (nonatomic) NSMutableDictionary inputMatrixToSecondKernel;
@property (nonatomic) NSMutableDictionary inputMatrixToFirstKernel;
- (unsigned long long)numInputs;
- (unsigned long long)numOutputs;
- (void).cxx_destruct;
- (id)initWithLayerType:name:neuronType:neuronParams:;
- (id)initWithLayerType:name:parameters:;
- (void)allocateInputDictionaries;
- (void)updateInputMatrixToFirstKernel:index:inference:;
- (void)updateInputMatrixToSecondKernel:index:inference:;
- (void)setNumInputs:;
- (void)setNumOutputs:;
- (id)inputMatrixToSecondKernel;
- (void)setInputMatrixToSecondKernel:;
- (id)inputMatrixToFirstKernel;
- (void)setInputMatrixToFirstKernel:;
@end
