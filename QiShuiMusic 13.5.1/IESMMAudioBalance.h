@interface IESMMAudioBalance : IESMMObject
- (id)initWithSampleRate:channels:config:;
- (int)process:samples:channels:;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (id)config;
- (id).cxx_construct;
@end
