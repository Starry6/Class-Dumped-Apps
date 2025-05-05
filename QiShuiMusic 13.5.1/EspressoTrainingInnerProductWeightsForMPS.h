@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS
@property (nonatomic) <MTLBuffer> weightsBuffer;
@property (nonatomic) <MTLBuffer> biasesBuffer;
- (BOOL)ready;
- (id)weightsBuffer;
- (void)setBiasesBuffer:;
- (id)biasesBuffer;
- (id)initWithParams:forMode:;
- (id)weights;
- (id)biasTerms;
- (void).cxx_destruct;
- (void)setWeightsBuffer:;
@end
