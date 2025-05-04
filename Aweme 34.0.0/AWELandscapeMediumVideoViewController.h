@interface AWELandscapeMediumVideoViewController : AWELandscapeBaseVideoViewController
@property (nonatomic) UIView fakeLandscapeTopView;
@property (nonatomic) UIView fakeLandscapeBottomView;
@property (nonatomic) BOOL shouldRequestRewardedAdvertising;
@property (nonatomic) NSDictionary rewardedAdvertisingParams;
- (void)playerWillLoopPlaying:;
- (void)updatePlayerFrame:;
- (BOOL)canAutoPlayNext;
- (BOOL)shouldRequestRewardedAdvertising;
- (id)rewardedAdvertisingParams;
- (void)setShouldRequestRewardedAdvertising:;
- (void)setRewardedAdvertisingParams:;
- (id)fakeLandscapeTopView;
- (id)fakeLandscapeBottomView;
- (void)handlePlaybackSetting;
- (void)setFakeLandscapeTopView:;
- (void)setFakeLandscapeBottomView:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupContext;
@end
