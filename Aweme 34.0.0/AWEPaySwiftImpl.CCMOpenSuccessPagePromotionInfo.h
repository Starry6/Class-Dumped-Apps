@interface AWEPaySwiftImpl.CCMOpenSuccessPagePromotionInfo : MTLModel
@property (nonatomic) NSString lynxSchema;
@property (nonatomic) NSString voucher;
@property (nonatomic) _TtC15AWEPaySwiftImpl17CCMDisplayVoucher voucherInfo;
- (id)lynxSchema;
- (void)setLynxSchema:;
- (id)voucherInfo;
- (void)setVoucherInfo:;
- (id)initWithDictionary:error:;
- (id)init;
- (id)voucher;
- (void).cxx_destruct;
- (void)setVoucher:;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)voucherInfoJSONTransformer;
@end
