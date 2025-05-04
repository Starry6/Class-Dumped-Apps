@interface AWEECommerceUtils : NSObject
+ (id)formatTenthousandCount:;
+ (id)imageMetaDataFromPath:;
+ (BOOL)isGoodsCacheExpiredWithLastStoreTime:cacheLimit:;
+ (BOOL)isToutiao:;
+ (long long)indexOfPromotionID:inGoodsList:;
+ (BOOL)isRelatedToAweme:;
+ (BOOL)isStatusOnSale:;
+ (BOOL)isTaobao:;
+ (id)toutiaoPromotionSources;
+ (void)tranferToURLString:;
+ (double)acquireAccurateActivityTime:serverTime:;
@end
