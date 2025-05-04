@interface AWEStudioDraftResourceFinder : NSObject
+ (BOOL)isVideoSuffix:;
+ (id)findMVMaterialForModel:;
+ (id)findImageAlbumImagesForModel:;
+ (id)findRecordVideosForModel:;
+ (id)findImagesInTmpDirectory:;
+ (id)findImagesInProjectDirectory:;
+ (id)findImportVideosForModel:;
+ (id)findCoverImageForModel:;
+ (void)sortFilesByModificationTime:;
+ (BOOL)isImageSuffix:;
+ (id)findVideosWithPrefix:inFolder:;
@end
