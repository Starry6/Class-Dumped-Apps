@interface BDAANavigationViewController : UINavigationController
- (BOOL)shouldAutorotate;
- (long long)preferredInterfaceOrientationForPresentation;
- (id)init;
- (id)initWithRootViewController:;
- (unsigned long long)supportedInterfaceOrientations;
@end
