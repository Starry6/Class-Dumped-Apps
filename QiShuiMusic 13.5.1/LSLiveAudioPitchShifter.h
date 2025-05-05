@interface LSLiveAudioPitchShifter : NSObject
@property (nonatomic) @? audiobufferCallback;
- (id)audiobufferCallback;
- (id)initWithSample:channels:;
- (void)processAudioData:dataSize:channels:inNumberFrames:isEndFrame:;
- (void)processBufferList:inNumberFrames:isEndFrame:;
- (void)setAudiobufferCallback:;
- (void)setPitch:;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
