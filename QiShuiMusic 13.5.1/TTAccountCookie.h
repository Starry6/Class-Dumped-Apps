@interface TTAccountCookie : NSObject
+ (void)clearAllCookies;
+ (void)clearAccountCookie;
+ (void)clearCookieForName:;
+ (id)cookieForName:;
+ (id)csrfTokenInCookie;
+ (id)domainsForCookieName:;
+ (id)sessionIDInCookie;
+ (id)cookies;
+ (id)cookiesForURL:;
@end
