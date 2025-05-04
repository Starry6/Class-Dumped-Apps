@interface AWEECTabKitHistoryDeepLinkConfigProxy : NSObject
+ (BOOL)enableCFShortLinkTransform;
+ (long long)deepLinkPrefetchStrategyForDeliveryChannelTag:;
+ (BOOL)enableTabKitDeepLinkPrefetchForBizTag:;
+ (id)tabKitDeeplinkPrefetchConfig;
@end
