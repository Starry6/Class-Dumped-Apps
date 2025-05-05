@interface IESECGoodsDetailAuthorReputationModel : MTLModel
@property (nonatomic) NSString text;
@property (nonatomic) float score;
@property (nonatomic) Q level;
@property (nonatomic) NSString sales;
@property (nonatomic) NSString percent;
@property (nonatomic) NSArray salesNum;
@property (nonatomic) NSString scoreNormalText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)scoreNormalText;
- (id)sales;
- (id)salesNum;
- (void)setSales:;
- (void)setSalesNum:;
- (void)setScoreNormalText:;
- (void)setLevel:;
- (float)score;
- (unsigned long long)level;
- (void)setText:;
- (void)setScore:;
- (void).cxx_destruct;
- (id)text;
- (id)percent;
- (void)setPercent:;
+ (id)JSONKeyPathsByPropertyKey;
@end
