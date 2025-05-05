@interface VNDocumentCameraViewController : UIViewController
@property (nonatomic) UIViewController childViewController;
@property (nonatomic) <VNDocumentCameraViewControllerDelegate> delegate;
- (id)init;
- (BOOL)prefersStatusBarHidden;
- (void)setDelegate:;
- (id)initWithCoder:;
- (BOOL)_canShowWhileLocked;
- (id)delegate;
- (void).cxx_destruct;
- (id)initWithNibName:bundle:;
- (id)childViewController;
- (void)setChildViewController:;
- (id)initWithChildViewController:;
+ (BOOL)isSupported;
+ (id)newDefaultViewController;
+ (id)newViewServiceViewController;
+ (id)newInProcessViewController;
@end
