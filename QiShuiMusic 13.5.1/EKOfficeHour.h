@interface EKOfficeHour : NSObject
@property (nonatomic) BOOL enabled;
@property (nonatomic) q weekday;
@property (nonatomic) NSDate startTime;
@property (nonatomic) NSDate endTime;
@property (nonatomic) NSTimeZone timeZone;
- (void)setTimeZone:;
- (BOOL)enabled;
- (void)setStartTime:;
- (void)setEndTime:;
- (id)startTime;
- (id)endTime;
- (void)setEnabled:;
- (void).cxx_destruct;
- (id)timeZone;
- (id)copyWithZone:;
- (void)setWeekday:;
- (long long)weekday;
- (id)initWithEnabled:weekday:startTime:endTime:timeZone:;
@end
