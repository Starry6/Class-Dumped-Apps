@interface CJPayBalanceModel : CJPayChannelModel
@property (nonatomic) NSInteger balanceAmount;
@property (nonatomic) NSString balanceQuota;
@property (nonatomic) NSInteger freezedAmount;
@property (nonatomic) NSString mobile;
@property (nonatomic) BOOL isShowCombinePay;
@property (nonatomic) NSString primaryCombinePayAmount;
- (id)buildShowConfig;
- (id)balanceQuota;
- (int)freezedAmount;
- (BOOL)isShowCombinePay;
- (id)primaryCombinePayAmount;
- (id)requestNeedParams;
- (void)setBalanceQuota:;
- (void)setFreezedAmount:;
- (void)setIsShowCombinePay:;
- (void)setPrimaryCombinePayAmount:;
- (void).cxx_destruct;
- (int)balanceAmount;
- (void)setBalanceAmount:;
- (id)mobile;
- (void)setMobile:;
+ (id)keyMapper;
@end
