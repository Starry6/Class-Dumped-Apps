@interface LSLiveAudioEqualizer : NSObject
- (BOOL)getEnable;
- (id)initWithSample:channels:;
- (BOOL)process:andInput:andLen:andSamplePerChannel:;
- (BOOL)processBufferList:;
- (void)updateFormat:;
- (void)dealloc;
- (void).cxx_destruct;
@end
