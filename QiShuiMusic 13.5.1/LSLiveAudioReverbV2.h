@interface LSLiveAudioReverbV2 : NSObject
- (BOOL)getEnable;
- (BOOL)process:andInput:andLen:andChannel:andSamplePerChannel:;
- (BOOL)processBufferList:;
- (void)updateFormat:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
