@interface DNDScheduleSettings : NSObject
@property (nonatomic) Q scheduleEnabledSetting;
@property (nonatomic) DNDScheduleTimePeriod timePeriod;
@property (nonatomic) Q bedtimeBehaviorEnabledSetting;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (unsigned long long)scheduleEnabledSetting;
- (unsigned long long)bedtimeBehaviorEnabledSetting;
- (void).cxx_destruct;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithSettings:;
- (id)timePeriod;
- (id)initWithScheduleEnabledSetting:timePeriod:bedtimeBehaviorEnabledSetting:;
+ (BOOL)supportsSecureCoding;
@end
