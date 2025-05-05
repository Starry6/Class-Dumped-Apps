@interface PUPhotoPickerHostViewController : _UIRemoteViewController
@property (nonatomic) <PUPhotoPickerHostService> hostProxy;
@property (nonatomic) BOOL _invalidated;
@property (nonatomic) <PUPhotoPickerHostViewControllerDelegate> delegate;
@property (nonatomic) NSExtensionContext hostExtensionContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)_isInvalidated;
- (void)setDelegate:;
- (void)viewServiceDidTerminateWithError:;
- (id)delegate;
- (void)willMoveToParentViewController:;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setHostExtensionContext:;
- (void)performTraitCollectionUpdateWithCompletion:;
- (void)performPhotoPickerPreviewOfFirstAsset;
- (id)_hostContext;
- (id)hostProxy;
- (id)hostExtensionContext;
- (void)set_invalidated:;
@end
