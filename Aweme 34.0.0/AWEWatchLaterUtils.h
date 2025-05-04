@interface AWEWatchLaterUtils : NSObject
+ (BOOL)detailPageOptimizedEnable;
+ (BOOL)enableVideoCache;
+ (id)defaultDetailPageConfig;
+ (id)leftSlideDetailPageConfig;
+ (long long)alignWatchTimeWithProgress:loopCount:model:;
@end
