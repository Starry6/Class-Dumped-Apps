@interface AWEInTodayPlayerDownloader : NSObject
+ (void)downloadWithModel:progress:complete:;
+ (void)checkFilePathExists;
+ (void)downloadLocalImageWithModel:progress:complete:;
+ (void)downloadAwemeImageWithModel:progress:complete:;
+ (void)downloadLocalVideoWithModel:progress:complete:;
+ (void)downloadAwemeVideoWithModel:progress:complete:;
+ (id)memoriesDirectoryPath;
+ (id)memoriesDirectory;
+ (id)memoriesPathForLocalImageTileModel:;
+ (void)downloadPhotoHandlerWithModel:withImage:info:savePath:complete:;
+ (void)exportLocalVideoWithAVAsset:destURL:complete:;
+ (void)downloadResourceWithModels:progress:hotspot:complete:;
+ (void)cleanAllResource;
@end
