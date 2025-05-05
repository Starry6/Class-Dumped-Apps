@interface ICHTTPCookieStore : NSObject
- (id)init;
- (void)dealloc;
- (id)getCookieWithName:userIdentifier:;
- (void)saveCookies:forURL:;
- (void)saveGlobalAccountCookies:forURL:;
- (id)getCookiesForURL:;
- (id)getCookiesHeadersForURL:userIdentifier:;
- (void)removeAllCookies;
- (void)_saveCookies:userIdentifier:;
- (id)getCookiesForUserIdentifier:;
- (id)_accountForUserIdentifier:;
- (void).cxx_destruct;
- (id)getGlobalAccountCookiesForURL:;
- (void)removeCookiesWithProperties:;
- (void)saveCookies:forURL:userIdentifier:;
- (id)_cookieDictionaryForURL:userIdentifier:;
- (id)getCookiesForURL:userIdentifier:;
+ (id)sharedCookieStore;
@end
