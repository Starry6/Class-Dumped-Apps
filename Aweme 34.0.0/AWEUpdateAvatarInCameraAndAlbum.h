@interface AWEUpdateAvatarInCameraAndAlbum : NSObject
@property (nonatomic) UIViewController photoLibraryVC;
@property (nonatomic) NSDictionary params;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAvatarInAlbum:;
- (void)trackReplaceProfileInfo;
- (void)openPhotoLibraryPicker;
- (void)showPhotoAuthAlert;
- (void)trackEditAvatarPageSwitch:albumToShoot:shootToAlbum:;
- (void)cameraFinishResultHandlerFromAlbum:image:originImage:actionBlock:;
- (id)addCameraEntranceToPhotoPicker;
- (void)setPhotoLibraryVC:;
- (void)openCamera:;
- (id)photoLibraryVC;
- (id)scaleToSize:newSize:;
- (void).cxx_destruct;
- (id)params;
- (void)setParams:;
+ (id)shareInstance;
@end
