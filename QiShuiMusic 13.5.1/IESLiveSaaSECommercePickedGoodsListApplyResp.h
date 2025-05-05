@interface IESLiveSaaSECommercePickedGoodsListApplyResp : IESLiveSaaSECommerceBaseApiModel
@property (nonatomic) IESLiveSaaSAudienceECommerceCouponMetaModel couponMeta;
@property (nonatomic) NSDictionary originDic;
+ (id)couponMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
