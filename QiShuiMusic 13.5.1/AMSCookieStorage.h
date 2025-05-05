@interface AMSCookieStorage : NSObject
+ (id)cookiesForAccount:error:;
+ (BOOL)updateCookiesWithCookiesToAdd:cookiesToRemove:forAccount:error:;
+ (BOOL)isCookieDomainMigrationEnabled;
+ (id)cookiesForAccount:cookieDatabaseOnly:error:;
@end
