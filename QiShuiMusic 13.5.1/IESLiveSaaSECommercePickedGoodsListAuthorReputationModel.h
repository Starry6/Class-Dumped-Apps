@interface IESLiveSaaSECommercePickedGoodsListAuthorReputationModel : BDDynamicMTLModel
@property (nonatomic) NSString text;
@property (nonatomic) float score;
@property (nonatomic) Q level;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)levelText;
- (id)levelThemeBackgroundColor;
- (id)levelThemeScoreColor;
- (id)levelThemeTextColor;
- (id)scoreText;
- (BOOL)hasScore;
+ (id)JSONKeyPathsByPropertyKey;
@end
