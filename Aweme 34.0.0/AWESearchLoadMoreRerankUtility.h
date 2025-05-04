@interface AWESearchLoadMoreRerankUtility : NSObject
+ (id)performanceConfig;
+ (BOOL)isHitLoadMoreRerank;
+ (BOOL)isHitRefreshRerank;
+ (long long)hitLoadMoreRerankCount;
+ (BOOL)enableAsyncFetchFeature;
+ (BOOL)isStorageExpired;
+ (BOOL)enableSafaThreadPerformance;
+ (double)fetchExpiredDuration;
+ (void)sendTrackEventKey:andInfo:;
+ (BOOL)enableAsyncRunTask;
+ (void)fetchFeatures;
+ (BOOL)disableLoadmoreRerank;
+ (double)fetchUpdateDuration;
+ (BOOL)isExpired;
@end
