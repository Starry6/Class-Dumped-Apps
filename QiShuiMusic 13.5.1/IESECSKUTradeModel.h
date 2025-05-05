@interface IESECSKUTradeModel : IESECBaseApiModel
@property (nonatomic) q tradeType;
@property (nonatomic) NSString content;
@property (nonatomic) NSString subContent;
@property (nonatomic) NSString cornernText;
@property (nonatomic) q benefitType;
@property (nonatomic) NSArray tradeButtons;
@property (nonatomic) BOOL select;
- (void)setBenefitType:;
- (void)setCornernText:;
- (long long)benefitType;
- (id)cornernText;
- (void)setSubContent:;
- (void)setTradeButtons:;
- (void)setTradeType:;
- (id)subContent;
- (id)tradeButtons;
- (long long)tradeType;
- (id)content;
- (void)setContent:;
- (BOOL)select;
- (void).cxx_destruct;
- (void)setSelect:;
+ (id)tradeButtonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
