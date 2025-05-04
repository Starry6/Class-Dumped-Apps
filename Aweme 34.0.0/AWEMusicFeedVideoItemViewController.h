@interface AWEMusicFeedVideoItemViewController : AWEMusicFeedBaseItemViewController
@property (nonatomic) UIView playerView;
- (void)playerReadyToPlay:;
- (void)itemViewDidAppear;
- (void)currentPageWillChangeAnimation:;
- (void)itemDidDisappear;
- (void)itemViewDidReset;
- (void)viewDidLoad;
- (void)setPlayerView:;
- (id)playerView;
- (void).cxx_destruct;
- (void)updateUI;
@end
