@interface STDowntimeOverride : NSObject
@property (nonatomic) q type;
@property (nonatomic) q state;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSCalendar calendar;
@property (nonatomic) NSDate endDate;
- (id)calendar;
- (unsigned long long)hash;
- (id)endDate;
- (long long)type;
- (long long)state;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)creationDate;
- (id)_initWithType:state:creationDate:calendar:endDate:;
- (BOOL)isActiveAtDate:;
- (BOOL)isExpiredAtDate:;
- (long long)modificationBasedOnScheduleChangeAtDate:;
- (BOOL)isEqualToDowntimeOverride:;
+ (id)overrideWithState:creationDate:calendar:fixedDuration:;
+ (id)overrideWithState:creationDate:calendar:endDate:;
@end
