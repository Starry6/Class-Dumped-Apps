@interface CTSweetgumUsagePlanMetrics : NSObject
@property (nonatomic) NSString planLabel;
@property (nonatomic) q planCategory;
@property (nonatomic) BOOL currentUsedPlan;
@property (nonatomic) CTSweetgumUsagePlanItemData dataUsage;
@property (nonatomic) CTSweetgumUsagePlanItemMessages messages;
@property (nonatomic) CTSweetgumUsagePlanItemVoice voice;
@property (nonatomic) NSString remainingBalance;
@property (nonatomic) BOOL throttled;
@property (nonatomic) NSDate lastUpdatedAt;
- (id)init;
- (id)messages;
- (void)setVoice:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)voice;
- (void).cxx_destruct;
- (void)setThrottled:;
- (id)dataUsage;
- (BOOL)throttled;
- (id)description;
- (BOOL)isEqual:;
- (id)planLabel;
- (void)setPlanLabel:;
- (long long)planCategory;
- (void)setPlanCategory:;
- (BOOL)currentUsedPlan;
- (void)setCurrentUsedPlan:;
- (void)setDataUsage:;
- (void)setMessages:;
- (id)remainingBalance;
- (void)setRemainingBalance:;
- (id)lastUpdatedAt;
- (void)setLastUpdatedAt:;
+ (BOOL)supportsSecureCoding;
@end
