@interface VNDocumentCameraViewController_InProcess : VNDocumentCameraViewController
@property (nonatomic) UIViewController viewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setViewController:;
- (void)didReceiveMemoryWarning;
- (long long)_preferredModalPresentationStyle;
- (id)viewController;
- (void).cxx_destruct;
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
- (void)removeSaveActionBlockerForFiles;
@end
