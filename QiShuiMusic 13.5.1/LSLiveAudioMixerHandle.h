@interface LSLiveAudioMixerHandle : NSObject
@property (nonatomic) <LSLiveAudioMixerProtocol> delegate;
- (id)getDefaultAudioBasicDescription;
- (void)setupOutputUnit;
- (id)initWithConfig:outputDesc:maxElementCount:;
- (void)initializeAUGraph;
- (void)p_createNodes;
- (void)processAudioBufferData:size:inNumberFrames:;
- (void)processAudioBufferList:inNumberFrames:;
- (void)setVolume:elementIndex:;
- (void)setupMixerUnit;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (double)getVolume:;
@end
