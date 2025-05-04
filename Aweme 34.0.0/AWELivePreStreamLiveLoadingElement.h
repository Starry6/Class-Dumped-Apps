@interface AWELivePreStreamLiveLoadingElement : AWELiveBaseElement
@property (nonatomic) AWELoadingAndVolumeView loadingView;
@property (nonatomic) UIView preStreamView;
- (void)prepareForDisPlay;
- (void)streamPlayer_firstFrame;
- (void)streamPlayer_resumePlay;
- (void)streamPlayer_frozenPlay;
- (id)preStreamView;
- (void)setPreStreamView:;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (id)loadingView;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupUI;
- (void)showLoadingView;
- (void)stopLoadingAnimation;
@end
