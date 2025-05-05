@interface AXMSinglePitchTone : AXMTone
- (id)initWithSampleRate:envelope:;
- (id)initWithFrequency:sampleRate:envelope:;
- (void)renderInBuffer:atFrame:;
@end
