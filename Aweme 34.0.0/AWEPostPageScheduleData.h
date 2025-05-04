@interface AWEPostPageScheduleData : NSObject
@property (nonatomic) NSDate date;
@property (nonatomic) NSArray hours;
@property (nonatomic) NSArray minutes;
@property (nonatomic) q year;
@property (nonatomic) q month;
@property (nonatomic) q day;
@property (nonatomic) q limitHour;
@property (nonatomic) q limitMinute;
- (long long)limitHour;
- (void)setLimitHour:;
- (long long)limitMinute;
- (void)setLimitMinute:;
- (void)setDate:;
- (long long)day;
- (id)minutes;
- (void)setMinutes:;
- (long long)month;
- (long long)year;
- (void)setHours:;
- (void).cxx_destruct;
- (void)setDay:;
- (void)setMonth:;
- (void)setYear:;
- (id)hours;
- (id)date;
+ (id)createWithDate:calendar:;
@end
