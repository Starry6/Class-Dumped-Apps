@interface CJPayPreTradeTrackInfo : JSONModel
@property (nonatomic) NSString balanceStatus;
@property (nonatomic) NSString bankCardStatus;
@property (nonatomic) NSString creditStatus;
- (id)bankCardStatus;
- (id)creditStatus;
- (void)setBankCardStatus:;
- (void)setCreditStatus:;
- (void).cxx_destruct;
- (id)balanceStatus;
- (void)setBalanceStatus:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
