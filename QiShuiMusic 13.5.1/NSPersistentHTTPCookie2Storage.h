@interface NSPersistentHTTPCookie2Storage : NSObject
@property (nonatomic) NSURL path;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)commitTransaction;
- (id)path;
- (id)init;
- (void)beginTransaction;
- (void)setCookies:;
- (void)setPath:;
- (void).cxx_destruct;
- (id)initWithPath:;
- (void)setCookie:;
- (void)deleteCookie:;
- (id)getCookiesWithFilter:;
- (id)getAllCookies;
- (void)deleteCookies:;
- (void)deleteAllCookies;
- (void)deleteCookiesWithFilter:;
@end
