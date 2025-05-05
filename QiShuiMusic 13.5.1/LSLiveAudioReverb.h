@interface LSLiveAudioReverb : NSObject
- (BOOL)getEnable;
- (id)initWithSample:channels:reverbFmt:;
- (BOOL)process:andInput:andLen:andSamplePerChannel:;
- (BOOL)processBufferList:;
- (void)updateFormat:;
- (void)dealloc;
- (void).cxx_destruct;
@end
