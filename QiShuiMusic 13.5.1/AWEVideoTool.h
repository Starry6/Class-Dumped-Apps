@interface AWEVideoTool : NSObject
+ (void)cleanOldAWEVideoToolErrorVideos;
+ (id)errorVideoDir;
+ (void)getAlbumWithName:completion:;
+ (void)logSaveVideoErrorInfoWithKey:videoPath:error:;
+ (void)saveVideoToAlbum:completion:;
+ (void)saveVideoToAlbum:needAsset:completion:;
+ (void)saveVideoToAlbumUsingAssetLibrary:needAsset:completion:;
+ (void)saveVideoToCameraRoll:needAsset:completion:;
@end
