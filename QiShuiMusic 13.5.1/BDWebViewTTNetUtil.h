@interface BDWebViewTTNetUtil : NSObject
+ (void)addTTNetBlockList:;
+ (BOOL)isHitTTNetBlockListWithURL:;
+ (id)monitorResponseHeaders;
+ (long long)ttnetAutoBlockListCount;
+ (id)ttnetRefErrorURLs;
+ (id)ttnetResponseHeaders:;
+ (id)ttnetResponseTimingInfo:;
@end
