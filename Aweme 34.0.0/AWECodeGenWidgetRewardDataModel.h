@interface AWECodeGenWidgetRewardDataModel : AWEBaseDataModel
@property (nonatomic) q amount;
@property (nonatomic) NSString amountType;
@property (nonatomic) NSString successDesc;
- (id)successDesc;
- (void)setSuccessDesc:;
- (void).cxx_destruct;
- (long long)amount;
- (void)setAmount:;
- (id)amountType;
- (void)setAmountType:;
+ (id)JSONKeyPathsByPropertyKey;
@end
