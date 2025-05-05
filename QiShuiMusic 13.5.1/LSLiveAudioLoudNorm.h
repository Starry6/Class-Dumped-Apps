@interface LSLiveAudioLoudNorm : NSObject
- (id)initOffLineWithSample:channels:useSingleChannel:;
- (id)initWithSample:channels:useSingleChannel:;
- (void)processAudioData:channels:inNumberFrames:;
- (void)processBufferList:inNumberFrames:;
- (void)setLoudNormParams:value:;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
