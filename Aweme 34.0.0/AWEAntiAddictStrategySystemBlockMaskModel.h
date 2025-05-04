@interface AWEAntiAddictStrategySystemBlockMaskModel : MTLModel
@property (nonatomic) NSNumber liveTimeWorkday;
@property (nonatomic) NSNumber fatigueValueWorkday;
@property (nonatomic) NSNumber liveTimeWeekend;
@property (nonatomic) NSNumber fatigueValueWeekend;
@property (nonatomic) NSNumber forceRemindBlockTime;
@property (nonatomic) q timeRange;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (double)currentFatigueValueAtDate:;
- (long long)currentLiveTimeInSecondAtDate:;
- (id)forceRemindBlockTime;
- (id)liveTimeWorkday;
- (id)fatigueValueWorkday;
- (id)liveTimeWeekend;
- (id)fatigueValueWeekend;
- (id)initWithLiveTimeWorkday:fatigueValueWorkday:liveTimeWeekend:fatigueValueWeekend:forceRemindBlockTime:;
- (long long)timeRange;
- (BOOL)isValid;
- (void).cxx_destruct;
- (BOOL)isEqual:;
+ (id)JSONKeyPathsByPropertyKey;
@end
