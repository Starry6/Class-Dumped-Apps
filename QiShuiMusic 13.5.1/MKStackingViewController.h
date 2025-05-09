@interface MKStackingViewController : UIViewController
@property (nonatomic) NSArray viewControllers;
@property (nonatomic) <MKStackingViewControllerDelegate> stackingDelegate;
@property (nonatomic) BOOL scrollEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) UIScrollView scrollView;
- (void)setViewControllers:;
- (void)scrollViewDidEndDecelerating:;
- (void)_didScroll;
- (id)viewControllers;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:;
- (double)currentHeight;
- (void)scrollViewDidScroll:;
- (id)scrollView;
- (void)scrollViewWillBeginDragging:;
- (void)viewWillLayoutSubviews;
- (void)scrollViewDidEndDragging:willDecelerate:;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (void)loadView;
- (void)setScrollEnabled:;
- (BOOL)isScrollEnabled;
- (void)viewDidLayoutSubviews;
- (void)scrollToTopAnimated:;
- (void)viewDidLoad;
- (void)stackViewNeedsLayout:;
- (double)stackView:distanceBetweenUpperView:andLowerView:;
- (BOOL)_isSafeToPerformLayout;
- (double)_titleHeight;
- (void)_setScrollEnabled:forcedUpdate:;
- (double)_fittingHeightForView:;
- (void)setWidthConstraintConstant:;
- (void)_updateFixedHeightAwareControllers;
- (void)setStackingDelegate:;
- (void)_updateStackViewSubviewsAndChildVCsEntering:exiting:;
- (void)_callViewControllersLayoutDelegateIfNeeded;
- (void)_setUpEnteringViewController:;
- (void)_tearDownExitingViewController:;
- (void)setOverlayView:withOriginY:;
- (void)removeOverlayViewAnimated:;
- (void)_setOverlayViewFrame;
- (void)_setPreferredHeight:forViewController:;
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:;
- (void)_removePreferredHeightConstraintFromViewController:;
- (void)_sendScrollnotification;
- (void)_updateViewControllerVisibilityAfterPositionChange;
- (BOOL)isViewVisbile:percentageTreshold:;
- (id)stackingDelegate;
@end
