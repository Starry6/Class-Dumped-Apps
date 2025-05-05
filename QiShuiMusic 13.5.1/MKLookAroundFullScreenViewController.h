@interface MKLookAroundFullScreenViewController : UIViewController
@property (nonatomic) UIView contentView;
@property (nonatomic) Q originalAutoresizingMask;
@property (nonatomic) <MKLookAroundFullScreenViewControllerDelegate> delegate;
- (id)contentView;
- (long long)overrideUserInterfaceStyle;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)setDelegate:;
- (void)viewDidDisappear:;
- (void)viewWillDisappear:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)setContentView:;
- (void)viewDidLayoutSubviews;
- (void)attachContentView;
- (void)detachContentView;
- (unsigned long long)originalAutoresizingMask;
- (void)setOriginalAutoresizingMask:;
@end
