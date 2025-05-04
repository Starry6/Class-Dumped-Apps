@interface AWELeftSideBarNavigationController : UINavigationController
@property (nonatomic) <AWELeftSideBarNavigationControllerDelegateProtocol> sideBarDelegate;
@property (nonatomic) BOOL hasTriggerPresentAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (id)aAWEPadModuleAdapter;
- (BOOL)transition_delayEndPercentageDriveIfNeededWithContext:;
- (void)reopenSideBar:completion:;
- (double)sideBarNonInteractedDismissAnimationDuration;
- (void)sideBarNonInteractedDismissShowAnimation;
- (void)sideBarNonInteractedDismissEndAnimationWithResult:;
- (double)presentAnimationDuration;
- (void)willStartPresentAnimation:;
- (void)startPresentAnimation;
- (void)endPresentAnimationWithResult:;
- (BOOL)hasTriggerPresentAnimation;
- (void)viewDidLoad;
- (void)viewDidDisappear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (id)sideBarDelegate;
- (void)setSideBarDelegate:;
+ (Class)aAWEPadModuleAdapterClass;
@end
