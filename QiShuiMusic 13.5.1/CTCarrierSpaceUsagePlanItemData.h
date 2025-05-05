@interface CTCarrierSpaceUsagePlanItemData : NSObject
@property (nonatomic) q units;
@property (nonatomic) NSString capacity;
@property (nonatomic) NSString maxDataBeforeThrottling;
@property (nonatomic) NSString thisDeviceDataUsed;
@property (nonatomic) NSString sharedDataUsed;
@property (nonatomic) NSString sharedPlanIdentifier;
- (id)capacity;
- (void)setCapacity:;
- (id)init;
- (void)setUnits:;
- (id)initWithCoder:;
- (long long)units;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)maxDataBeforeThrottling;
- (void)setMaxDataBeforeThrottling:;
- (id)thisDeviceDataUsed;
- (void)setThisDeviceDataUsed:;
- (id)sharedDataUsed;
- (void)setSharedDataUsed:;
- (id)sharedPlanIdentifier;
- (void)setSharedPlanIdentifier:;
+ (BOOL)supportsSecureCoding;
@end
