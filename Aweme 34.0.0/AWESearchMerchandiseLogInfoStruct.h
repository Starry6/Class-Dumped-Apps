@interface AWESearchMerchandiseLogInfoStruct : AWEBaseApiModel
@property (nonatomic) NSString recommendType;
@property (nonatomic) NSString recommendText;
@property (nonatomic) NSString priceInfo;
- (id)recommendType;
- (void)setRecommendType:;
- (id)priceInfo;
- (void)setPriceInfo:;
- (id)recommendText;
- (void)setRecommendText:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
