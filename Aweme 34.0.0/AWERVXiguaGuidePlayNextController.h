@interface AWERVXiguaGuidePlayNextController : AWEVideoPlayControlBaseController
@property (nonatomic) AWELongVideoXiguaGuidePlayNextVideoView xiguaPlayNextVideoView;
@property (nonatomic) UIVisualEffectView glassmorphismView;
- (void)setHide:;
- (void)bindEvent;
- (id)glassmorphismView;
- (void)setGlassmorphismView:;
- (id)xiguaPlayNextVideoView;
- (void)hiddenPlayDoneXiguaGuideView;
- (void)showPlayDoneXiguaGuideViewWithTitle:coverUrl:isForceGuide:completion:;
- (void)setXiguaPlayNextVideoView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
