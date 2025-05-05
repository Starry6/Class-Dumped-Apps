@interface IESECLiveGoodStatusUtils : NSObject
+ (id)saleInfoForAnchorWithSaleStatus:stockStatus:soldHint:;
+ (id)saleInfoForAudienceWithSaleStatus:stockStatus:soldHint:;
+ (long long)saleStatusForAnchor:;
+ (long long)saleStatusForAudience:;
+ (long long)stockStatusWithSold:withStock:withCampaign:;
@end
