@interface IESECLiveGoodsListApplyResp : IESECLiveApiBaseModel
@property (nonatomic) IESECLiveCouponModel couponMeta;
@property (nonatomic) NSDictionary originDic;
- (id)couponMeta;
- (id)originDic;
- (void)setCouponMeta:;
- (void)setOriginDic:;
- (void).cxx_destruct;
+ (id)couponMetaJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
