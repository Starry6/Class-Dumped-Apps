@interface AWELandscapeNavigationController : UINavigationController
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLoad;
@end
