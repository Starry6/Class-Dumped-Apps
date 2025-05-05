@interface CJPayBytePayCreditPayMethodModel : CJPayCreditPayMethodModel
@property (nonatomic) q index;
@property (nonatomic) BOOL choose;
@property (nonatomic) NSArray voucherMsg;
@property (nonatomic) NSString payTypeDesc;
@property (nonatomic) NSString feeDesc;
@property (nonatomic) q orderSubFixedVoucherAmount;
- (id)feeDesc;
- (void)setPayTypeDesc:;
- (long long)orderSubFixedVoucherAmount;
- (id)payTypeDesc;
- (void)setChoose:;
- (void)setFeeDesc:;
- (void)setOrderSubFixedVoucherAmount:;
- (void)setVoucherMsg:;
- (id)voucherMsg;
- (void).cxx_destruct;
- (BOOL)choose;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
