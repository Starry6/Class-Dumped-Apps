@interface EMRemoteContentURLCache : NSURLCache
- (void)storeCancelationIfNeededForDataTask:completionHandler:;
- (void)storeResponseIfNeeded:withData:forDataTask:completionHandler:;
- (void)getCachedResponseForDataTask:completionHandler:;
- (void)storeCachedResponse:forDataTask:;
@end
