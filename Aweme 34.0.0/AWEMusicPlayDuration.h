@interface AWEMusicPlayDuration : NSObject
@property (nonatomic) double playingDuration;
@property (nonatomic) AWEMusicService player;
@property (nonatomic) BOOL eventBackgroundPlay;
@property (nonatomic) AWEMusicPlayerModel tempCurrentModel;
- (void)receiveNotes:;
- (BOOL)eventBackgroundPlay;
- (void)setEventBackgroundPlay:;
- (void)audioOver;
- (void)setPlayingDuration:;
- (void)setTempCurrentModel:;
- (id)tempCurrentModel;
- (void)audioPlay;
- (void)playStatusChanged:model:;
- (id)initWithPlayer:;
- (id)player;
- (void)setPlayer:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupNotifications;
- (double)playingDuration;
@end
