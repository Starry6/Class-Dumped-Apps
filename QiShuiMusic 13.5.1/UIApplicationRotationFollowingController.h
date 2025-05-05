@interface UIApplicationRotationFollowingController : UIViewController
@property (nonatomic) BOOL sizesWindowToScene;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:;
- (BOOL)_canShowWhileLocked;
- (BOOL)sizesWindowToScene;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (long long)_preferredInterfaceOrientationGivenCurrentOrientation:;
- (void)window:setupWithInterfaceOrientation:;
- (id)__autorotationSanityCheckObjectFromSource:selector:;
- (id)_topMostWindow;
- (void)setSizesWindowToScene:;
@end
