@interface AWESearchNearbyEntranceManager : NSObject
+ (BOOL)enableSearchRefreshOptIn202406;
+ (double)groupBuyFeedConsumeTimeForSearchRefresh;
+ (long long)groupBuyFeedLoadMoreCountForSearchRefresh;
+ (BOOL)enableSearchRefreshOptWithEnterFrom:;
+ (double)groupBuySearchRefreshTimeLimit;
@end
