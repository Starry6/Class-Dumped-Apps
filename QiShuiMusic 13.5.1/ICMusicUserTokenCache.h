@interface ICMusicUserTokenCache : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (void)_loadPersistedCacheWithCompletion:;
- (id)_init;
- (void)_persistCache;
- (void)_handleMusicUserTokensDidChangeDistributedNotification:;
- (void)getCachedUserTokenForDeveloperToken:requestContext:completion:;
- (void)setCachedUserToken:forDeveloperToken:requestContext:completion:;
- (void)_postLocalChangeNotification;
+ (id)sharedCache;
+ (id)_decodeDeveloperTokenPart:;
+ (void)_getCacheKeyForDeveloperToken:requestContext:completion:;
@end
