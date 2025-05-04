@interface AWEMediaDownloadSaveStage : AWEMediaDownloadBaseStage
- (long long)progressUnitCount;
- (void)saveImageToAlbum;
- (void)saveLivePhotoToAlbum:imageURL:;
- (void)saveDownloadedImagesToAlbum;
- (void)saveGIFToAlbum;
- (void)saveVideoToAlbum;
- (void)moveLivePhotoToDir:imageURL:;
- (void)run;
- (void)handleProgress:;
@end
