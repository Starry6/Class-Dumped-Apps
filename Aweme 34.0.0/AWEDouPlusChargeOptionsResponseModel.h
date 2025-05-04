@interface AWEDouPlusChargeOptionsResponseModel : AWEBaseApiModel
@property (nonatomic) double totalBalance;
@property (nonatomic) double totalBalanceAndDebt;
@property (nonatomic) NSArray iapBudgetList;
- (double)totalBalanceAndDebt;
- (void)setTotalBalanceAndDebt:;
- (id)iapBudgetList;
- (void)setIapBudgetList:;
- (void).cxx_destruct;
- (void)setTotalBalance:;
- (double)totalBalance;
+ (id)iapBudgetListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
