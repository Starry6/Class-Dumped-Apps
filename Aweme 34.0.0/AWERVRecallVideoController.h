@interface AWERVRecallVideoController : AWEVideoPlayControlBaseController
@property (nonatomic) AWERelatedVideoVideoPlayerDrawBackView drawBackView;
@property (nonatomic) UIVisualEffectView glassView;
- (void)setHide:;
- (void)bindEvent;
- (BOOL)shouldBlockGesture:touch:;
- (id)drawBackView;
- (void)setDrawBackView:;
- (id)glassView;
- (BOOL)shouldHandlePan;
- (void)setGlassView:;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)reset;
@end
