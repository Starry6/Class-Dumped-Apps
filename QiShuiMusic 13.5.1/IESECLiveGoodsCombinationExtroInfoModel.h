@interface IESECLiveGoodsCombinationExtroInfoModel : MTLModel
@property (nonatomic) BOOL isBound;
@property (nonatomic) NSNumber originMaxPrice;
@property (nonatomic) NSNumber originMinPrice;
@property (nonatomic) NSNumber comboMaxPrice;
@property (nonatomic) NSNumber comboMinPrice;
@property (nonatomic) NSString cardBackgroundColor;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)comboMaxPrice;
- (id)comboMinPrice;
- (id)originMaxPrice;
- (id)originMinPrice;
- (void)setComboMaxPrice:;
- (void)setComboMinPrice:;
- (void)setOriginMaxPrice:;
- (void)setOriginMinPrice:;
- (id)cardBackgroundColor;
- (void).cxx_destruct;
- (void)setCardBackgroundColor:;
- (BOOL)isBound;
- (void)setIsBound:;
+ (id)JSONKeyPathsByPropertyKey;
@end
