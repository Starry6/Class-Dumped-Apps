@interface AWETeenUserProfileSlidingViewController : AWESlidingViewController
- (Class)scrollViewClass;
- (id)p_currentVC;
- (void)reloadAllTabVC;
- (void)adjustCurrentVCContentOffsetWithHeaderViewFrameY:headerHeight:;
- (double)contrntOffsetYOfCurrentVC;
- (void)refreshVCWithIndex:;
- (void)addjustOtherVCContentOffset:;
- (void)viewDidLoad;
@end
