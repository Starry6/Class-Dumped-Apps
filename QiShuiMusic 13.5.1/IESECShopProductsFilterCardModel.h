@interface IESECShopProductsFilterCardModel : MTLModel
@property (nonatomic) NSArray sorts;
@property (nonatomic) NSArray activityFilterButtons;
@property (nonatomic) IESECShopProductsPromotionalFilterState promotionalFilterState;
@property (nonatomic) IESECShopGoodsPickTypeModel pickModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)activityFilterButtons;
- (id)pickModel;
- (id)promotionalFilterState;
- (void)setActivityFilterButtons:;
- (void)setPickModel:;
- (void)setPromotionalFilterState:;
- (void)setSorts:;
- (void).cxx_destruct;
- (id)sorts;
+ (id)activityFilterButtonsJSONTransformer;
+ (id)sortsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
