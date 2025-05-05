@interface LSLiveAudioAec : NSObject
- (int)getAECType;
- (id)initWithSample:channels:modelPath:;
- (void)processMicBufferList:inNumberFrames:;
- (void)processPlayerBufferList:inNumberFrames:;
- (void)setAECCoeff:;
- (void)setEnableAgc:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
