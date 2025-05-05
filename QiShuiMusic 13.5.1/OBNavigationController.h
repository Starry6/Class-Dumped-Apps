@interface OBNavigationController : UINavigationController
@property (nonatomic) Q supportedInterfaceOrientations;
- (void)pushViewController:animated:;
- (void)setViewControllers:;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)setSupportedInterfaceOrientations:;
@end
