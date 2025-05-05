@interface TSAudioTimeErrorCorrelator : NSObject
@property (nonatomic) @? correlationBlock;
- (void).cxx_destruct;
- (id)initWithMaxCorrelationLength:andUpscaleFactor:forSamplingRate:;
- (void)_calculateUpsamplerCoefficients:length:;
- (id)correlationBlock;
- (void)setCorrelationBlock:;
@end
