@interface AWEPlayletPaymentInfo : AWEBaseApiModel
@property (nonatomic) q playletPaidStatus;
@property (nonatomic) NSNumber playletItemPrice;
@property (nonatomic) AWEPlayletPaymentLimitFreeInfo limitFreeInfo;
- (long long)playletPaidStatus;
- (void)setPlayletPaidStatus:;
- (id)playletItemPrice;
- (void)setPlayletItemPrice:;
- (id)limitFreeInfo;
- (void)setLimitFreeInfo:;
- (void).cxx_destruct;
+ (id)limitFreeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
