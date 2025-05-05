@interface CTCarrierSpaceDataPlanMetricsItem : NSObject
@property (nonatomic) NSNumber capacityBytes;
@property (nonatomic) BOOL capacityValid;
@property (nonatomic) q units;
@property (nonatomic) Q capacity;
- (unsigned long long)capacity;
- (void)setCapacity:;
- (id)init;
- (void)setUnits:;
- (id)initWithCoder:;
- (long long)units;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)capacityBytes;
- (void)setCapacityBytes:;
- (BOOL)capacityValid;
- (void)setCapacityValid:;
+ (BOOL)supportsSecureCoding;
@end
