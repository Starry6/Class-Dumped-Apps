@interface PLKeywordManager : NSObject
- (id)initWithPathManager:;
- (void).cxx_destruct;
- (BOOL)setKeywords:forAsset:;
- (id)createOrLookupKeywordForTitle:photoLibrary:error:;
- (BOOL)setKeywords:forAssetUUID:managedObjectContext:;
- (BOOL)setKeyword:forAssets:managedObjectContext:;
- (BOOL)setKeyword:managedObjectContext:;
- (void)_inq_loadKeywordsUsingContextIfNecessaryInManagedObjectContext:;
- (void)_invalidateKeywordCache;
- (id)_inq_keywordObjectsForKeywords:managedObjectContext:;
- (BOOL)_setKeywords:forAsset:managedObjectContext:;
- (BOOL)_setKeyword:forAssets:managedObjectContext:;
+ (id)keywordsForAsset:;
+ (id)keywordsForAssetWithUUID:managedObjectContext:;
+ (id)_keywordsForAsset:;
+ (id)keywordsForAssets:;
@end
