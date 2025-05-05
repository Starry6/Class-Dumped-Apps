@interface DCDocumentCameraViewController_InProcess : DCDocumentCameraViewController
@property (nonatomic) UIViewController viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setViewController:;
- (void)didReceiveMemoryWarning;
- (long long)_preferredModalPresentationStyle;
- (id)viewController;
- (void).cxx_destruct;
- (id)initWithDelegate:;
- (void)_autoDismiss;
- (void)documentCameraControllerDidCancel:;
- (BOOL)documentCameraController:canAddImages:;
- (id)documentCameraControllerCreateDataCryptorIfNecessary;
- (id)scanDataDelegateWithIdentifier:;
- (void)documentCameraController:didFinishWithImage:;
- (void)documentCameraController:didFinishWithDocInfoCollection:imageCache:warnUser:;
- (void)remoteDocumentCameraControllerDidCancel:;
- (void)remoteDocumentCameraController:didFinishWithInfoCollection:;
- (void)remoteDocumentCameraController:didFailWithError:;
@end
