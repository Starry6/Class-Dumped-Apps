@interface AMSCookieService : NSObject
@property (nonatomic) {os_unfair_lock_s=I} inMemoryStorageLock;
@property (nonatomic) NSCache inMemoryStorage;
@property (nonatomic) BOOL isObservingNotifications;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)getCookiesForAccount:withCompletion:;
- (void)_registerForCookieChangeNotifications;
- (void)clearCookieCache;
- (void)_unregisterFromCookieChangeNotifications;
- (void)clearCookieCacheForAccount:;
- (id)inMemoryStorage;
- (void).cxx_destruct;
- (void)cache:willEvictObject:;
- (void)getCookiesForAccount:cookieDatabaseOnly:withCompletion:;
- (void)_cacheCookies:forAccount:;
- (id)inMemoryStorageLock;
- (BOOL)isObservingNotifications;
- (id)_cachedCookiesForAccount:;
- (void)setIsObservingNotifications:;
- (void)updateCookiesWithCookiesToAdd:cookiesToRemove:forAccount:withCompletion:;
- (id)cookiePromiseForAccount:;
+ (BOOL)_isEntitledForDirectCookieAccess;
+ (id)sharedService;
@end
