@interface CSJUgenAggregationViewController : UIViewController
@property (nonatomic) CSJAdInfoViewModel infoViewModel;
@property (nonatomic) <CSJUgenAggregationLifeCycleProtocol> ugenAggregationVM;
- (id)infoViewModel;
- (id)initWithInfoViewModel:viewModel:;
- (void)setInfoViewModel:;
- (void)setUgenAggregationVM:;
- (id)ugenAggregationVM;
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
@end
