@interface AWEStudioAudioMusicServiceImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setFadeInOutEnable:;
- (long long)playStatus;
- (id)currentPlayModel;
- (void)setMusicModels:current:queueId:;
- (void)appendMusicModels:;
- (void)setLoopModeDefault;
- (id)getPlayModelWithMusicModel:queueName:;
- (id)lastPlayModel;
- (BOOL)isPlaying;
- (void)play;
- (void)removeObserver:;
- (void)addObserver:;
- (void)clear;
- (void)stop;
- (void)pause;
@end
