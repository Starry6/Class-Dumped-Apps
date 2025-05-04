@interface AWETeenFeedPreCacheTracker : NSObject
+ (void)trackRevokeCacheVideoWithCacheNum:;
+ (void)trackPullOutCacheVideoWithIsCache:isTimeOut:cacheNum:;
+ (void)trackCacheFeedRequest:;
+ (void)trackCacheFeedRequestResponse:errorCode:errorDesc:;
+ (void)trackCacheVideoRequest;
+ (void)trackCacheVideoRequestResponse:;
+ (void)trackCacheConsume:;
@end
