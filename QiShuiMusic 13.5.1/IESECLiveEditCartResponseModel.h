@interface IESECLiveEditCartResponseModel : IESECGoodsAddToCartResponse
@property (nonatomic) NSDictionary data;
@property (nonatomic) IESECLiveCartGoodsBasicInfoModel goodsBasicInfo;
- (id)goodsBasicInfo;
- (void)setGoodsBasicInfo:;
- (id)data;
- (id)initWithDictionary:error:;
- (void).cxx_destruct;
- (void)setData:;
+ (id)JSONKeyPathsByPropertyKey;
@end
