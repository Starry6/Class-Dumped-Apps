@interface IESECFeedCouponMarketingInfoModel : IESECBaseApiModel
@property (nonatomic) IESECGoodsDetailCouponMarketingBanner marketingBanner;
@property (nonatomic) IESECGoodsDetailCouponMarketingTip marketingTip;
- (id)marketingBanner;
- (id)marketingTip;
- (void)setMarketingBanner:;
- (void)setMarketingTip:;
- (void).cxx_destruct;
+ (id)marketingBannerJSONTransformer;
+ (id)marketingTipJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
