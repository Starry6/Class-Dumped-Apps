@interface IESMMAudioDenoise : IESMMObject
- (id)initWithSampleRate:channels:config:;
- (int)process:samples:channels:;
- (void)seekToTime:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id).cxx_construct;
@end
