@interface QLThumbnailAdditionCache : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)thumbnailAdditionForItemAtURL:error:;
- (void)purgeCachedAdditionForItemAtURL:;
- (void)cacheAddition:forDocumentID:;
+ (id)sharedInstance;
@end
