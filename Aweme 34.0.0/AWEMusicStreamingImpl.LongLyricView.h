@interface AWEMusicStreamingImpl.LongLyricView : UIView
@property (nonatomic) _TtC21AWEMusicStreamingImpl24BNLyricModeContainerView lyricContainer;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (void)handleTap:;
- (void)updatePlayStateWithIsPlaying:;
- (id)lyricContainer;
- (void)setLyricContainer:;
- (void)updateColorWithColors:;
- (void)showRetryViewWithStats:;
- (void)showLyricView;
- (void)reloadLyricViewIfNeeded;
- (void)reloadWithTrack:playScene:;
- (void)updateButtonWithTrack:;
- (void)updateInfoWithAnimationWithTrack:playScene:completion:;
- (id)initWithDelegate:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)initWithCoder:;
- (void)showLoading;
@end
