@interface CJPayPrimaryCombinePayInfoModel : JSONModel
@property (nonatomic) q secondaryPayTypeIndex;
@property (nonatomic) q primaryAmount;
@property (nonatomic) q secondaryAmount;
@property (nonatomic) NSString primaryAmountString;
@property (nonatomic) NSString secondaryAmountString;
- (long long)secondaryAmount;
- (long long)primaryAmount;
- (id)primaryAmountString;
- (id)secondaryAmountString;
- (long long)secondaryPayTypeIndex;
- (void)setPrimaryAmount:;
- (void)setPrimaryAmountString:;
- (void)setSecondaryAmount:;
- (void)setSecondaryAmountString:;
- (void)setSecondaryPayTypeIndex:;
- (void).cxx_destruct;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
