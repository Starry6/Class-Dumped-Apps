@interface VEAudioFilter : IESMMObject
- (id)initWithSampleRate:channels:config:;
- (int)process:samples:channels:;
- (int)processEnd;
- (void)reset;
@end
