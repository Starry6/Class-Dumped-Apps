@interface AWEPublishImageAlbumSaveManger : NSObject
+ (BOOL)addDetailLogOptimize;
+ (void)saveImageAlbumWithAwemeIfNeeded:publishModel:imageFileURLs:completion:;
+ (void)p_doSaveAfterPermissionWithURLList:metaModel:publishModel:completion:;
+ (void)p_doSavePhotoInAlbumAfterPermissionWithURLList:metaModel:awemeAlbum:publishModel:completion:;
+ (id)metadataForImageWithMetaModel:index:;
+ (id)mergedDataWithImageData:metadata:;
+ (void)saveImageAlbumWithAwemeIfNeeded:publishModel:completion:;
@end
