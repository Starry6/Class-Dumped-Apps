@interface NSHTTPCookieStorageInternal : NSObject
- (void)dealloc;
- (void)registerForPostingNotificationsWithContext:;
- (void)_syncCookies;
@end
