@interface TSAudioTimeErrorCorrelatorQuick : TSAudioTimeErrorCorrelator
- (void)dealloc;
- (id)initWithMaxCorrelationLength:andUpscaleFactor:forSamplingRate:;
- (void)_makeBlock;
@end
