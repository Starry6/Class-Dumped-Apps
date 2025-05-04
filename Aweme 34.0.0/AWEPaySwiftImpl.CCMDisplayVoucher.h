@interface AWEPaySwiftImpl.CCMDisplayVoucher : MTLModel
@property (nonatomic) NSString voucherType;
@property (nonatomic) NSString voucherName;
@property (nonatomic) q amount;
@property (nonatomic) NSString voucherNo;
@property (nonatomic) NSString assetType;
- (id)voucherType;
- (void)setVoucherType:;
- (id)voucherName;
- (void)setVoucherName:;
- (id)voucherNo;
- (void)setVoucherNo:;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setAssetType:;
- (void).cxx_destruct;
- (id)assetType;
- (id)initWithCoder:;
- (long long)amount;
- (void)setAmount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
