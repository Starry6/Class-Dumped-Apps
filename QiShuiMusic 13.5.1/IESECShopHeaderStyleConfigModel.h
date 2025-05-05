@interface IESECShopHeaderStyleConfigModel : MTLModel
@property (nonatomic) IESECShopScoreStyle scoreStyle;
@property (nonatomic) IESECShopFlagshipStyle flagshipStyle;
@property (nonatomic) IESECShopSearchBarStyle searchBarStyle;
@property (nonatomic) IESECShopSellingPointStyle sellingPointStyle;
@property (nonatomic) IESECShopSellingPointStyle sellingPointLivingStyle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)flagshipStyle;
- (id)scoreStyle;
- (id)sellingPointLivingStyle;
- (id)sellingPointStyle;
- (void)setFlagshipStyle:;
- (void)setScoreStyle:;
- (void)setSellingPointLivingStyle:;
- (void)setSellingPointStyle:;
- (id)searchBarStyle;
- (void)setSearchBarStyle:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
