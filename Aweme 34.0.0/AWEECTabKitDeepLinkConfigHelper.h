@interface AWEECTabKitDeepLinkConfigHelper : NSObject
+ (BOOL)enableCFShortLinkTransform;
+ (long long)deepLinkPrefetchStrategyForDeliveryChannelTag:;
+ (long long)p_strategyForDeliveryChannelTag:;
+ (BOOL)p_enableTabKitDeepLinkPrefetchForBizTag:;
+ (BOOL)enableTabKitDeepLinkPrefetchForBizTag:;
@end
