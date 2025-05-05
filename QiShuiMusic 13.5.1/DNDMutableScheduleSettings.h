@interface DNDMutableScheduleSettings : DNDScheduleSettings
@property (nonatomic) Q scheduleEnabledSetting;
@property (nonatomic) DNDScheduleTimePeriod timePeriod;
@property (nonatomic) Q bedtimeBehaviorEnabledSetting;
- (void)setScheduleEnabledSetting:;
- (void)setBedtimeBehaviorEnabledSetting:;
- (id)copyWithZone:;
- (void)setTimePeriod:;
@end
