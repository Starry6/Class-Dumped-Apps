@interface TCWebNavigationController : UINavigationController
- (BOOL)shouldAutorotate;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
@end
