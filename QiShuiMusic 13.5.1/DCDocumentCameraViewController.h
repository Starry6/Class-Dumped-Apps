@interface DCDocumentCameraViewController : UIViewController
@property (nonatomic) UIViewController childViewController;
@property (nonatomic) <DCDocumentCameraViewControllerDelegate> docCamDelegate;
- (id)initWithCoder:;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (id)initWithNibName:bundle:;
- (id)childViewController;
- (void)setChildViewController:;
- (id)docCamDelegate;
- (void)setDocCamDelegate:;
- (id)initWithDelegate:childViewController:;
+ (BOOL)isAvailable;
+ (id)defaultViewControllerWithDelegate:;
+ (id)viewServiceViewControllerWithDelegate:;
+ (id)inProcessViewControllerWithDelegate:;
@end
