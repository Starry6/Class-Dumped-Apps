@interface ICMusicSubscriptionStatusCache : NSObject
- (void)updateBaseCacheKey;
- (void)dealloc;
- (void)_handlePhoneNumberDidChangeNotification:;
- (void)_handleSubscriptionStatusChangedDistributedNotification:;
- (id)_statusChangeUserInfoForUserIdentity:oldStatus:newStatus:;
- (void)getCachedSubscriptionStatusResponseForRequestContext:completion:;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForAllRequestContextsWithCompletion:;
- (void)_handleUserIdentityStoreDidChangeNotification:;
- (void).cxx_destruct;
- (void)_getCacheKeyForRequestContext:completion:;
- (void)_handleActiveAccountDidChangeNotification:;
- (void)_loadPersistedCacheWithCompletion:;
- (id)_init;
- (void)_persistCachePostingGlobalNotification:;
- (void)_postLocalChangeNotificationWithUserInfo:;
- (void)setCachedSubscriptionStatusResponse:forRequestContext:completion:;
- (void)setCachedSubscriptionStatusResponseNeedsReloadForRequestContext:completion:;
+ (id)sharedCache;
@end
