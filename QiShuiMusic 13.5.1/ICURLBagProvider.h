@interface ICURLBagProvider : NSObject
- (void)invalidateCache;
- (id)init;
- (void)dealloc;
- (void)_saveCache;
- (void)getBagForRequestContext:forceRefetch:withCompletionHandler:;
- (void)_fetchBagForRequestContext:withCompletionHandler:;
- (id)_cacheFilePath;
- (BOOL)_shouldUseLegacyProtocolForRequestContext:;
- (void)getBagForRequestContext:withCompletionHandler:;
- (void)_handleUserIdentityStoreDidChangeNotification:;
- (void).cxx_destruct;
- (id)_amsProcessInfoFromRequestContext:;
- (id)_getCacheKeyForRequestContext:;
- (void)_loadCache;
+ (id)sharedBagProvider;
@end
