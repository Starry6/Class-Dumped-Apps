@interface BDWebContentPreloadManager : NSObject
+ (BOOL)existPageCacheForURLString:;
+ (id)fetchWebResourceSync:;
+ (void)preloadPageWithURLs:userAgent:;
+ (void)preloadPageWithURLs:userAgent:useHttpCaches:;
+ (void)saveResponse:forURLString:;
+ (void)cancelTasks:;
@end
