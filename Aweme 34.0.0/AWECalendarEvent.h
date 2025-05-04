@interface AWECalendarEvent : NSObject
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) q alarmTime;
@property (nonatomic) q continousDays;
@property (nonatomic) NSString eventId;
@property (nonatomic) NSString title;
@property (nonatomic) NSString tag;
- (long long)continousDays;
- (long long)alarmTime;
- (void)setAlarmTime:;
- (void)setContinousDays:;
- (id)tag;
- (void)setStartTime:;
- (double)endTime;
- (void)setEndTime:;
- (void)setTag:;
- (void).cxx_destruct;
- (id)title;
- (double)startTime;
- (void)setTitle:;
- (id)eventId;
- (void)setEventId:;
@end
