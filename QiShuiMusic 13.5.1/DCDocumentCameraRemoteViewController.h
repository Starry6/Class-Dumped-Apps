@interface DCDocumentCameraRemoteViewController : _UIRemoteViewController
@property (nonatomic) UIViewController<DCDocumentCameraPublicViewController> publicViewController;
@property (nonatomic) <DCDocumentCameraViewServiceViewController> viewServiceViewController;
- (void)didCancel;
- (void)dismiss;
- (void)viewServiceDidTerminateWithError:;
- (void).cxx_destruct;
- (void)didFailWithError:;
- (void)viewServicePreferredSizeDidChange:;
- (void)viewControllerWasDismissed;
- (void)didFinishWithDocumentInfoCollection:;
- (id)viewServiceViewController;
- (id)publicViewController;
- (void)setPublicViewController:;
+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
@end
