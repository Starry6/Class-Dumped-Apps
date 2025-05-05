@interface NSHTTPCookie2Storage : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)initWithPath:;
- (id)initInNSMemoryHTTPCookie2Storage;
- (void)setCookie:withFilter:completionHandler:;
- (void)setCookies:withFilter:completionHandler:;
- (void)getCookiesWithFilter:completionHandler:;
- (void)getAllCookiesWithCompletionHandler:;
- (void)deleteCookie:withCompletionHandler:;
- (void)deleteAllCookiesWithCompletionHandler:;
- (void)deleteCookiesWithFilter:completionHandler:;
- (id)identifyingData;
- (id)initWithIdentifyingData:;
+ (id)sharedNSHTTPCookie2Storage;
@end
