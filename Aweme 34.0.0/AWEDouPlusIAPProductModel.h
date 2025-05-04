@interface AWEDouPlusIAPProductModel : MTLModel
@property (nonatomic) NSString iapID;
@property (nonatomic) q payAmount;
@property (nonatomic) q payAmountInt;
@property (nonatomic) q budget;
@property (nonatomic) q budgetInt;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)payAmountInt;
- (id)payAmountString;
- (id)iapID;
- (void)setIapID:;
- (long long)payAmount;
- (void)setPayAmount:;
- (void)setPayAmountInt:;
- (long long)budgetInt;
- (void)setBudgetInt:;
- (void)setIsSelected:;
- (void)setBudget:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (long long)budget;
+ (id)JSONKeyPathsByPropertyKey;
@end
