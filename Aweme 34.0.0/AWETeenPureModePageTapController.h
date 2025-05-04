@interface AWETeenPureModePageTapController : AWEBaseController
@property (nonatomic) UITapGestureRecognizer tapGesture;
@property (nonatomic) double lastClickTimestamp;
- (void)onVideoPlayerViewDoubleClicked:;
- (void)playDiggAnimationInView:location:image:;
- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:;
- (void)onVideoPlayerViewClicked:;
- (void)onVideoPlayerViewSingleClicked:;
- (id)scaleRect:scale:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setTapGesture:;
@end
