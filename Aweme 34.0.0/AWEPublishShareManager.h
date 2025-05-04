@interface AWEPublishShareManager : NSObject
+ (BOOL)videoHasDescriptionMetadata:;
+ (void)removeDesMetadataWithVideoURL:cacheDirPath:completion:;
+ (void)getAlbumWithName:completion:;
+ (void)savePublishedAwemeIfNeeded:publishModel:completion:;
+ (void)sharePublishedAwemeIfNeeded:publishModel:;
+ (BOOL)hasAppliedTemplate:;
+ (void)trackWatermarkShareDownloadEventWithAweme:platform:enterFrom:actionType:hasWatermark:hasEndWatermark:;
+ (void)saveAwemeIfNeeded:publishModel:resources:completion:;
+ (id)saveToAlbumResourcesWithPublishViewModel:;
+ (void)saveVideoIfNeededWithURL:saveToAlbum:needsURLAsset:copyToSandbox:completion:;
+ (void)modifyMetadateIfNeededWithVideoURL:publishModel:completion:;
+ (void)muteAwemeIfNeeded:withVideoURL:publishModel:completion:;
+ (void)trackSaveMetaInfoWith:fromVideo:;
+ (BOOL)addDetailLogOptimize;
+ (void)p_saveVideoInAlbumIfNeededWithURL:needsURLAsset:sandboxURL:awemeAlbum:completion:;
+ (BOOL)isLivePhoto:imageResource:videoResource:;
+ (void)saveLivePhotoWithVideoFilePath:imageFilePath:livePhotoImagePosition:completion:;
+ (void)saveAwemeIfNeeded:publishModel:videoURLs:completion:;
@end
