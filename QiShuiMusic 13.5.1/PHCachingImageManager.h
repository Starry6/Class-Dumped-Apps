@interface PHCachingImageManager : PHImageManager
@property (nonatomic) BOOL allowsCachingHighQualityImages;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)additionalWorkForImageRequestCompletedWithResult:request:context:;
- (id)init;
- (void)_commitCacheChanges;
- (id)_cacheFailReasonFromInfo:;
- (id)_tableFormatsForLibrary:;
- (void)setAllowsCachingHighQualityImages:;
- (void)stopCachingImagesForAssets:targetSize:contentMode:options:;
- (void)stopCachingImagesForAllAssets;
- (id)_imageTableForPreheatingDegradedOpportunisticRequestsWithPhotoLibrary:;
- (void)_preheatImageTable:forAssets:;
- (BOOL)allowsCachingHighQualityImages;
- (void)startCachingImagesForAssets:targetSize:contentMode:options:;
- (void)_scheduleOrCommitCacheChangesIfNeeded;
- (void)_handleCachingImageRequestResult:request:context:;
- (void)imageCache:didEvictCacheEntry:;
- (void).cxx_destruct;
- (void)_handleMemoryWarning;
- (BOOL)_canPopulateCacheForResult:;
- (BOOL)_cacheImageResult:forRequest:;
- (void)mediaRequestContext:isQueryingCacheForRequest:didWait:didFindImage:resultHandler:;
+ (id)_chooseImageTableFormatForPreheatingFromFormats:targetSize:contentMode:returnBestTableRegardlessOfFit:;
@end
