@interface CJPayCombinePayFund : JSONModel
@property (nonatomic) NSString fundTypeDesc;
@property (nonatomic) NSString fundType;
@property (nonatomic) NSString fundAmountDesc;
@property (nonatomic) q fundAmount;
- (long long)fundAmount;
- (id)fundAmountDesc;
- (id)fundType;
- (id)fundTypeDesc;
- (void)setFundAmount:;
- (void)setFundAmountDesc:;
- (void)setFundType:;
- (void)setFundTypeDesc:;
- (void).cxx_destruct;
+ (id)keyMapper;
@end
