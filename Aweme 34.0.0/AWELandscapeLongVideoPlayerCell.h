@interface AWELandscapeLongVideoPlayerCell : AWELandscapeBasePlayerCell
- (id)logExtraDict;
- (void)replaceCurrentVideoViewController:;
- (void)createVideoPlayer;
- (void)commonExitWithCompletion:;
- (void)play;
- (id)videoViewController;
@end
