@interface AWECodeGenEnCouponInfoModel : AWEBaseDataModel
@property (nonatomic) q currencyType;
@property (nonatomic) NSString couponId;
@property (nonatomic) q discountAmount;
@property (nonatomic) q minPayAmount;
@property (nonatomic) q metaValidEndTime;
@property (nonatomic) NSInteger bizCouponType;
@property (nonatomic) NSInteger couponType;
- (void)setDiscountAmount:;
- (void)setCouponId:;
- (long long)discountAmount;
- (id)couponId;
- (int)couponType;
- (void)setCouponType:;
- (long long)currencyType;
- (void)setCurrencyType:;
- (long long)minPayAmount;
- (void)setMinPayAmount:;
- (long long)metaValidEndTime;
- (void)setMetaValidEndTime:;
- (int)bizCouponType;
- (void)setBizCouponType:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
