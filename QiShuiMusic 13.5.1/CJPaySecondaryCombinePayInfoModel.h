@interface CJPaySecondaryCombinePayInfoModel : JSONModel
@property (nonatomic) q tradeAmount;
@property (nonatomic) q primaryAmount;
@property (nonatomic) q secondaryAmount;
- (void)setTradeAmount:;
- (long long)secondaryAmount;
- (long long)primaryAmount;
- (void)setPrimaryAmount:;
- (void)setSecondaryAmount:;
- (long long)tradeAmount;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
