@interface CTCellularPlanSubscriptionDataUsage : NSObject
@property (nonatomic) double dataUsed;
@property (nonatomic) double dataCapacity;
@property (nonatomic) NSString dataCategory;
- (double)dataUsed;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)initWithCategory:andDataUsed:andDataCapacity:;
- (double)dataCapacity;
- (id)dataCategory;
+ (BOOL)supportsSecureCoding;
@end
