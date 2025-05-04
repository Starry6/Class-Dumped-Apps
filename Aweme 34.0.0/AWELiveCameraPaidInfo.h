@interface AWELiveCameraPaidInfo : AWEBaseApiModel
@property (nonatomic) NSInteger maxDuration;
@property (nonatomic) q duration;
@property (nonatomic) AWELiveCameraPaidInfo_PriceInfo priceInfo;
@property (nonatomic) AWELivePaidLiveBaseInfo paidLiveBaseInfo;
@property (nonatomic) AWELiveCameraPaidInfoPaidLiveBizExtra paidLiveBizExtra;
- (id)priceInfo;
- (void)setPriceInfo:;
- (id)paidLiveBaseInfo;
- (id)paidLiveBizExtra;
- (void)setPaidLiveBaseInfo:;
- (void)setPaidLiveBizExtra:;
- (void)setDuration:;
- (void).cxx_destruct;
- (long long)duration;
- (int)maxDuration;
- (void)setMaxDuration:;
+ (id)priceInfoJSONTransformer;
+ (id)paidLiveBaseInfoJSONTransformer;
+ (id)paidLiveBizExtraJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
