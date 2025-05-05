@interface DNDMutableScheduleTimePeriod : DNDScheduleTimePeriod
@property (nonatomic) DNDScheduleTime startTime;
@property (nonatomic) DNDScheduleTime endTime;
@property (nonatomic) Q weekdays;
- (void)setStartTime:;
- (void)setEndTime:;
- (void)setWeekdays:;
- (id)copyWithZone:;
@end
