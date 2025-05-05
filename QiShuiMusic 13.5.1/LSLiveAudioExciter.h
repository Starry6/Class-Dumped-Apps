@interface LSLiveAudioExciter : NSObject
- (void)freeExciter;
- (void)initExciterWithGain:highpassfreq:sampleRate:;
- (id)initWithGain:highpassfreq:sampleRate:;
- (void)processAudio:output:samples:channel:;
- (BOOL)processBufferList:outputL:outputR:;
- (void)updateFormat:;
- (void)dealloc;
@end
