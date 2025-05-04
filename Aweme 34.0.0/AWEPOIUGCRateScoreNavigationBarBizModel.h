@interface AWEPOIUGCRateScoreNavigationBarBizModel : MTLModel
@property (nonatomic) NSString originBG;
@property (nonatomic) NSString changeBG;
@property (nonatomic) AWEURLModel originRateCenter;
@property (nonatomic) AWEURLModel changeRateCenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pageDidScroll:context:thresholdOffsetY:;
- (id)changeBG;
- (id)changeRateCenter;
- (id)originBG;
- (id)originRateCenter;
- (void)setOriginBG:;
- (void)setChangeBG:;
- (void)setOriginRateCenter:;
- (void)setChangeRateCenter:;
- (void).cxx_destruct;
+ (id)naviBarViewModelWithContenxt:;
+ (id)JSONKeyPathsByPropertyKey;
@end
