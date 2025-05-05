@interface IESECLiveGoodsListAuthorReputationModel : IESECCouponButtonModel
@property (nonatomic) Q showType;
@property (nonatomic) NSString text;
@property (nonatomic) float score;
@property (nonatomic) Q level;
@property (nonatomic) IESECLiveGoodsProductTagModel shopTag;
@property (nonatomic) IESECLiveGoodsListAuthorReputationScoreContent scoreContent;
- (id)shopTag;
- (id)levelText;
- (id)levelThemeBackgroundColor;
- (id)levelThemeScoreColor;
- (id)levelThemeTextColor;
- (id)scoreContent;
- (id)scoreText;
- (void)setScoreContent:;
- (void)setShopTag:;
- (void)setLevel:;
- (float)score;
- (unsigned long long)level;
- (void)setText:;
- (void)setScore:;
- (void).cxx_destruct;
- (BOOL)hasScore;
- (id)text;
- (unsigned long long)showType;
- (void)setShowType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
