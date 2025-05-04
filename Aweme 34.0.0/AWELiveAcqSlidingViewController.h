@interface AWELiveAcqSlidingViewController : AWESlidingViewController
- (Class)scrollViewClass;
- (id)p_currentVC;
- (void)reloadAllTabVC;
- (double)contrntOffsetYOfCurrentVC;
- (void)refreshVCWithIndex:;
- (void)viewDidLoad;
@end
