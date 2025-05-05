@interface AXMVariablePitchTone : AXMTone
- (void).cxx_destruct;
- (id)initWithSampleRate:envelope:;
- (void)renderInBuffer:atFrame:;
- (id)initWithKeyPitches:sampleRate:envelope:;
- (unsigned long long)_bufferFrameForKeyPitch:;
@end
