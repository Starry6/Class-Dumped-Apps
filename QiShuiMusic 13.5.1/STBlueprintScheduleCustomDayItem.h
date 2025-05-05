@interface STBlueprintScheduleCustomDayItem : NSObject
@property (nonatomic) NSDateComponents startTime;
@property (nonatomic) NSDateComponents endTime;
@property (nonatomic) Q day;
- (unsigned long long)day;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void).cxx_destruct;
- (void)setDay:;
- (id)copyWithZone:;
@end
