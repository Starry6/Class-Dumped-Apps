@interface AWEPhotoTool : NSObject
+ (void)saveImageToAlbum:completion:;
+ (void)saveImageToAlbumUsingAssetsLib:completion:;
+ (void)saveImageToAlbumUsingPhotoKit:completion:;
+ (void)disableAssertLib;
@end
