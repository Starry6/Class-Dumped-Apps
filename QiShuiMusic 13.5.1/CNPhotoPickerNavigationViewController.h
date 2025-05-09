@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController
@property (nonatomic) CNPhotoPickerTrapView trapOverlayView;
@property (nonatomic) NSArray trapOverlayConstraints;
@property (nonatomic) {CGSize=dd} previousSize;
@property (nonatomic) BOOL disablingRotation;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) BOOL allowRotation;
- (void)keyboardWillShow:;
- (void)dealloc;
- (void)keyboardWillHide:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (void)setPreviousSize:;
- (id)previousSize;
- (id)initWithRootViewController:;
- (void)viewWillDisappear:;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setAllowRotation:;
- (void)endDisablingAutorotationIfNeeded;
- (void)endDisablingAutorotation;
- (void)beginDisablingAutorotation;
- (BOOL)shouldDisplayTrapOverlayView;
- (BOOL)isDisplayingTrapView;
- (void)setupTrapOverlayView;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:;
- (BOOL)allowRotation;
- (id)trapOverlayView;
- (void)setTrapOverlayView:;
- (id)trapOverlayConstraints;
- (void)setTrapOverlayConstraints:;
- (BOOL)disablingRotation;
- (void)setDisablingRotation:;
- (BOOL)isShowingKeyboard;
- (void)setIsShowingKeyboard:;
@end
