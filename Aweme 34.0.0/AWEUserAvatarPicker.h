@interface AWEUserAvatarPicker : AWEPhotoPicker
- (void)albumViewController:didClickAlbumAssetCell:;
- (void)cropViewController:didFinishCancelled:;
- (id)init;
- (void)reset;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
+ (id)sharedInstance;
@end
