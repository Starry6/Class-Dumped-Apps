@interface AWERVLongPressSpeedController : AWEVideoPlayControlBaseController
@property (nonatomic) AWERVLongPressSpeedViewModel viewModel;
- (void)setHide:;
- (void)bindEvent;
- (BOOL)shouldResponseRecognizer:;
- (id)viewModel;
- (void)viewDidLoad;
- (BOOL)handleLongPress:;
- (void)setData:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (void)reset;
@end
