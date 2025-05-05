@interface APHTTPCookieStorageMXXTIY : NSObject
@property (nonatomic) NSMutableArray cookies;
@property (nonatomic) <NSLocking> locker;
- (id)httpCookieHeaderStrForUrl:;
- (long long)indexOfCookie:;
- (id)locker;
- (void)setLocker:;
- (void)tryToAddCookie:ToArray:;
- (id)init;
- (void)setCookies:;
- (id)cookies;
- (void)unlock;
- (void)lock;
- (void).cxx_destruct;
- (void)setCookie:;
- (void)setCookies:forURL:mainDocumentURL:;
- (id)cookiesForURL:;
- (void)deleteCookie:;
- (void)deleteAllCookies;
+ (id)sharedHTTPCookieStorage;
@end
