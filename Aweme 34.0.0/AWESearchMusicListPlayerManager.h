@interface AWESearchMusicListPlayerManager : NSObject
@property (nonatomic) <MusicService> musicService;
@property (nonatomic) <AWEMusicStreamingPlayEventService> eventService;
@property (nonatomic) AWEMusicFeedViewModel currentMusicModel;
@property (nonatomic) q currentMusicIndex;
@property (nonatomic) double duration;
@property (nonatomic) double currentPlayTime;
@property (nonatomic) <AWESearchMusicListPlayerManagerDelegate> delegate;
@property (nonatomic) q playStatus;
@property (nonatomic) AWESearchMusicListPlayerManagerTrackModel trackModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)musicService:playStatusChanged:;
- (void)musicServiceMusicChanged:;
- (void)musicServiceReadyToPlay:;
- (void)musicServiceDidPlay:;
- (void)musicServiceDidPause:pauseType:;
- (void)musicServiceDidStop:;
- (void)musicServicePlaybackTimeChanged:;
- (double)currentPlayTime;
- (long long)playStatus;
- (void)setTrackModel:;
- (id)trackModel;
- (void)setLoopMode:;
- (id)musicService;
- (void)setMusicService:;
- (id)currentMusicModel;
- (id)queueModel;
- (void)openPlayerWithPreviousPage:enterMethod:extraParams:disablePopGesture:dismissBlock:;
- (void)playMusicWithMusicModels:currentModel:;
- (void)setMusicWithMusicModels:currentModel:;
- (long long)currentMusicIndex;
- (BOOL)isSameMusic:withPlayModel:;
- (void)updateTrackParams;
- (void)playMusicWithMusicModel:;
- (id)init;
- (void)play;
- (id)delegate;
- (void)setEventService:;
- (void).cxx_destruct;
- (double)duration;
- (void)setDelegate:;
- (id)eventService;
- (void)stop;
- (void)pause;
- (void)resetPlayer;
- (void)seekToTime:completion:;
@end
