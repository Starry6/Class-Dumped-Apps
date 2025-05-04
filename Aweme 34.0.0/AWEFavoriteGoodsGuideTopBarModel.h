@interface AWEFavoriteGoodsGuideTopBarModel : AWEBaseApiModel
@property (nonatomic) NSString guideText;
@property (nonatomic) NSString buttonText;
@property (nonatomic) Q collectType;
- (id)guideText;
- (void)setGuideText:;
- (unsigned long long)collectType;
- (void)setCollectType:;
- (id)buttonText;
- (void).cxx_destruct;
- (void)setButtonText:;
+ (id)JSONKeyPathsByPropertyKey;
@end
