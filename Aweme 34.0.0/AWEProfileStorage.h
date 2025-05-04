@interface AWEProfileStorage : NSObject
+ (void)_aweLazyRegisterStaticLoad;
+ (int)countOfCachedPostWorksFor:;
+ (void)loadStorageCacheAfterColdLaunch;
+ (void)cachedPostWorksForUser:withCompletion:;
+ (id)cachedPostWorksForUser:;
+ (id)__cachedStoragePostWorksForUser:;
+ (BOOL)savePostWorks:user:;
+ (void)clearPostWorksForUser:;
+ (void)appendLivePlaybackPlaceholderPosts:;
+ (void)saveLivePlaybackPlaceholderPosts:;
+ (id)cachedLivePlaybackPlaceholderPost;
@end
