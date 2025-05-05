@interface CJPayCombinePaymentAmountModel : JSONModel
@property (nonatomic) NSString totalAmount;
@property (nonatomic) NSString detailInfo;
@property (nonatomic) NSString cashAmount;
@property (nonatomic) NSString bankCardAmount;
- (id)bankCardAmount;
- (id)cashAmount;
- (id)detailInfo;
- (void)setBankCardAmount:;
- (void)setCashAmount:;
- (void)setDetailInfo:;
- (void).cxx_destruct;
- (id)totalAmount;
- (void)setTotalAmount:;
+ (id)keyMapper;
+ (BOOL)propertyIsOptional:;
@end
