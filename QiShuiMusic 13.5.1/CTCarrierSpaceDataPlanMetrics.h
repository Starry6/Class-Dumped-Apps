@interface CTCarrierSpaceDataPlanMetrics : NSObject
@property (nonatomic) NSDate billingCycleEndDate;
@property (nonatomic) CTCarrierSpaceDataPlanMetricsItem domestic;
@property (nonatomic) q regStatus;
@property (nonatomic) NSNumber domesticCapacity;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)domestic;
- (id)billingCycleEndDate;
- (void)setBillingCycleEndDate:;
- (void)setDomestic:;
- (long long)regStatus;
- (void)setRegStatus:;
- (id)domesticCapacity;
- (void)setDomesticCapacity:;
+ (BOOL)supportsSecureCoding;
@end
