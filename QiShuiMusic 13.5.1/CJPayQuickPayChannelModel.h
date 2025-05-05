@interface CJPayQuickPayChannelModel : CJPayChannelModel
@property (nonatomic) NSArray<CJPayQuickPayCardModel> cards;
@property (nonatomic) NSArray<CJPayQuickPayCardModel> discountBanks;
@property (nonatomic) NSString enableBindCard;
@property (nonatomic) NSString enableBindCardMsg;
@property (nonatomic) NSString discountBindCardMsg;
@property (nonatomic) NSString ttSubTitle;
- (id)buildShowConfig;
- (id)discountBanks;
- (id)discountBindCardMsg;
- (id)enableBindCard;
- (id)enableBindCardMsg;
- (BOOL)hasValidBankCard;
- (void)setCards:;
- (void)setDiscountBanks:;
- (void)setDiscountBindCardMsg:;
- (void)setEnableBindCard:;
- (void)setEnableBindCardMsg:;
- (void)setTtSubTitle:;
- (id)ttSubTitle;
- (void).cxx_destruct;
- (id)cards;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
