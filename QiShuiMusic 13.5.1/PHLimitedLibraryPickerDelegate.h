@interface PHLimitedLibraryPickerDelegate : NSObject
@property (nonatomic) @? dismissalBlock;
@property (nonatomic) @? finishedPickingBlock;
@property (nonatomic) PLAssetsdClient assetsdClient;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)presentationControllerDidDismiss:;
- (id)assetsdClient;
- (void)setDismissalBlock:;
- (id)dismissalBlock;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
- (void)imagePickerController:didFinishPickingMultipleMediaWithInfo:;
- (id)finishedPickingBlock;
- (void)setFinishedPickingBlock:;
- (void)_dismissImagePickerController:;
- (void)dismissImagePickerController:;
- (void)setAssetsdClient:;
@end
