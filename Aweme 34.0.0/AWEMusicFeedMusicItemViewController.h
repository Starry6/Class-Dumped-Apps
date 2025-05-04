@interface AWEMusicFeedMusicItemViewController : AWEMusicFeedBaseItemViewController
@property (nonatomic) AWEMusicImageSetAnimationView imageSetAnimView;
@property (nonatomic) BOOL isPlaying;
- (BOOL)awe_shouldAutorotate;
- (void)playerReadyToPlay:;
- (void)playStatusChanged:;
- (void)itemViewDidAppear;
- (void)itemViewDidDisappear;
- (void)attachModel:identifier:;
- (void)mainFeed_viewWillAppear;
- (void)playerControlViewProgressGestureDidEnd:currentTime:progress:completion:;
- (id)imageSetAnimView;
- (void)setImageSetAnimView:;
- (BOOL)isPlaying;
- (void)dealloc;
- (void)play;
- (void)viewDidLoad;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)reset;
- (void)setIsPlaying:;
- (void)pause;
- (void)updateUI;
@end
