@interface IESECTabKitPrefetchManager : NSObject
+ (BOOL)enableTimeConsumingOpt;
+ (void)preconnectHostForBizTag:;
+ (void)prefetchFirstScreenWithBizTag:;
+ (void)preloadTabsIdleWithBizTag:bffModel:hybridService:;
+ (BOOL)useInjectOpenTime:;
@end
