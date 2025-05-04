@interface AWEClassroomImpl.ClassroomDetailLandscapeNavigationController : UINavigationController
@property (nonatomic) Q supportedInterfaceOrientations;
@property (nonatomic) BOOL shouldAutorotate;
- (id)initWithRootViewController:;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithNibName:bundle:;
- (id)initWithCoder:;
- (id)initWithNavigationBarClass:toolbarClass:;
@end
