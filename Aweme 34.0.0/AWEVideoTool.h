@interface AWEVideoTool : NSObject
@property (nonatomic) @? block;
- (void)saveVideoToAlbumUsingUISaveVideoAtPathToSavedPhotosAlbum:completion:;
- (void)saveVideoToAlbumByUsingUIImageWriteSavedPhotoAlbum:didFinishSavingWithError:contxtInfo:;
- (id)block;
- (void)setBlock:;
- (void).cxx_destruct;
+ (void)saveVideoToAlbum:needAsset:completion:;
+ (void)disableAssertLib;
+ (void)cleanOldAWEVideoToolErrorVideos;
+ (void)saveVideoToCameraRoll:needAsset:completion:;
+ (void)logSaveVideoErrorInfoWithKey:videoPath:error:;
+ (void)saveVideoToAlbumUsingAssetLibrary:needAsset:completion:;
+ (void)getAlbumWithName:completion:;
+ (void)saveVideoToCameraRoll:withDate:needAsset:completion:;
+ (id)errorVideoDir;
+ (void)saveVideoToAlbum:completion:;
+ (void)saveVideoToAlbum:needAsset:withDate:completion:;
@end
