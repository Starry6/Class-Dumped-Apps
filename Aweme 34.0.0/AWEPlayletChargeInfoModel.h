@interface AWEPlayletChargeInfoModel : AWEBaseApiModel
@property (nonatomic) q chargeType;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) q chargeCount;
@property (nonatomic) q sellType;
@property (nonatomic) q unpaidCount;
@property (nonatomic) BOOL useDemotion;
@property (nonatomic) NSString buySchema;
@property (nonatomic) NSNumber promiseUpdateTime;
- (id)buySchema;
- (void)setBuySchema:;
- (BOOL)useDemotion;
- (void)setUseDemotion:;
- (long long)chargeType;
- (void)setChargeType:;
- (BOOL)hasPaid;
- (void)setHasPaid:;
- (long long)chargeCount;
- (void)setChargeCount:;
- (long long)sellType;
- (void)setSellType:;
- (long long)unpaidCount;
- (void)setUnpaidCount:;
- (id)promiseUpdateTime;
- (void)setPromiseUpdateTime:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
