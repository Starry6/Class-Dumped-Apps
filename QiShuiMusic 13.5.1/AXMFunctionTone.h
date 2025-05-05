@interface AXMFunctionTone : AXMTone
@property (nonatomic) @? function;
@property (nonatomic) {?=^dddddd} xAxisDescriptor;
@property (nonatomic) {?=^dddddd} yAxisDescriptor;
- (id)function;
- (void).cxx_destruct;
- (void)renderInBuffer:atFrame:;
- (id)initWithUnivariateFunction:sampleRate:envelope:xAxisDescriptor:yAxisDescriptor:;
- (double)_xAxisValueForNormalizedPosition:;
- (id)xAxisDescriptor;
- (id)yAxisDescriptor;
@end
