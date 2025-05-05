@interface DNDMutableScheduleTime : DNDScheduleTime
@property (nonatomic) Q hour;
@property (nonatomic) Q minute;
- (void)setMinute:;
- (void)setHour:;
- (id)copyWithZone:;
@end
