@interface AWEXPlayImagePickerPresenter : NSObject
@property (nonatomic) UIViewController presentingViewController;
@property (nonatomic) @? completionBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentImagePickerWithCert:completion:;
- (void)presentCameraWithCert:completion:;
- (void)setCompletionBlock:;
- (id)completionBlock;
- (id)initWithPresentingViewController:;
- (id)presentingViewController;
- (void).cxx_destruct;
- (void)setPresentingViewController:;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)picker:didFinishPicking:;
@end
