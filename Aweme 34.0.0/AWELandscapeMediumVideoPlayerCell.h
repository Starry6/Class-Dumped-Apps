@interface AWELandscapeMediumVideoPlayerCell : AWELandscapeBasePlayerCell
- (void)updateInteractionViewState:animated:;
- (void)createVideoPlayer;
- (void)exitLandscapeWithCompletion:;
- (void)refreshLogExtraDict;
- (void)innerFeedExitWithCompletion:;
- (void)commonExitWithCompletion:;
- (void)landscapeVideoViewController:updatePlayTime:canPlayTime:totalTime:;
- (void)quitFromLandScapeWithShouldShowRewardedAdvertisingIfNeeded;
@end
