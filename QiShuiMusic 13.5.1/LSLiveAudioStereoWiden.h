@interface LSLiveAudioStereoWiden : NSObject
- (BOOL)getEnable;
- (BOOL)process:andInput:andLen:andSamplePerChannel:;
- (BOOL)processBufferList:;
- (void)updateFormat:;
- (void)dealloc;
- (id)initWithChannel:;
@end
