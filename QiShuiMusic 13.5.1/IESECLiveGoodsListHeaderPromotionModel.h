@interface IESECLiveGoodsListHeaderPromotionModel : MTLModel
@property (nonatomic) q promotionType;
@property (nonatomic) IESECLiveGoodsListHeaderSubPromotionModel vertical;
@property (nonatomic) IESECLiveGoodsListHeaderSubPromotionModel horizontal;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)promotionType;
- (void)setPromotionType:;
- (void)setVertical:;
- (id)vertical;
- (void).cxx_destruct;
- (id)horizontal;
- (void)setHorizontal:;
+ (id)JSONKeyPathsByPropertyKey;
@end
