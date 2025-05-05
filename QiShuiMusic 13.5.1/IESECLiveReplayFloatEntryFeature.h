@interface IESECLiveReplayFloatEntryFeature : NSObject
@property (nonatomic) Q replayFloatStoredPlayState;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupForPageVC:;
- (void)cancelReplayWindowToIconAnimationTimerWithPageVC:;
- (void)detailDidUpdate:;
- (void)fillEventHandler:;
- (void)floatEntryViewUpdate:withModel:pageVC:;
- (void)handleReplayEntryAnimationWithPercent:isUp:pageVC:;
- (id)liveReplayVideoQuery:;
- (id)optimizedReplayWindowBottomRightWithPageVC:;
- (id)optimizedReplayWindowSizeWithPageVC:liveFloatEntry:;
- (unsigned long long)replayFloatStoredPlayState;
- (void)replayShouldPause:pageVC:;
- (void)replayShouldRecover:pageVC:;
- (void)replayShouldStore:pageVC:;
- (void)replayWindowDidClose:;
- (void)setLiveReplayFloatEntryAlpha:pageVC:;
- (void)setLiveReplayFloatEntryVanishAndPosition:;
- (void)setReplayFloatStoredPlayState:;
- (void)setupReplayWindowToIconAnimationTimerWithPageVC:;
- (void)updateReplayModel:toLiveFloat:;
- (id)init;
- (void)dealloc;
+ (id)shared;
@end
