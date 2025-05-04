@interface AWEECGoodsCardDataModel : AWEBaseApiModel
@property (nonatomic) NSString promotionId;
@property (nonatomic) NSDictionary promotionInfo;
@property (nonatomic) NSDictionary recommendInfo;
@property (nonatomic) NSString link;
- (id)promotionInfo;
- (void)setPromotionInfo:;
- (id)promotionId;
- (void)setPromotionId:;
- (id)recommendInfo;
- (void)setRecommendInfo:;
- (void).cxx_destruct;
- (id)link;
- (void)setLink:;
+ (id)JSONKeyPathsByPropertyKey;
@end
