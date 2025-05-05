@interface DanceUIParchment.PageViewController : UIViewController
@property (nonatomic) BOOL shouldAutomaticallyForwardAppearanceMethods;
- (void)scrollViewDidScroll:;
- (void)scrollViewWillBeginDragging:;
- (void)scrollViewWillEndDragging:withVelocity:targetContentOffset:;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)initWithCoder:;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
