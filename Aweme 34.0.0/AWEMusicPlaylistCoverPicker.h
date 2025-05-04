@interface AWEMusicPlaylistCoverPicker : AWEPhotoPicker
- (void)showImagePicker:enableCrop:;
- (void)pickPhotoFromSource:WithReason:allowSource:editorType:cropingStyle:coverMaskImage:aspectRato:otherActions:selectedBlock:completionBlock:;
- (void)imagePickerController:didFinishPickingMediaWithInfo:;
+ (id)sharedInstance;
@end
