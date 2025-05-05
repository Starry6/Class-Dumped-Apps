@interface STDowntimeConfiguration : NSObject
@property (nonatomic) q currentState;
@property (nonatomic) NSDate currentDate;
@property (nonatomic) q nextState;
@property (nonatomic) NSDate nextStateChangeDate;
@property (nonatomic) NSCalendar calendar;
- (id)calendar;
- (long long)currentState;
- (id)currentDate;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)nextStateChangeDate;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (long long)nextState;
- (id)initWithCurrentState:currentDate:nextState:nextStateChangeDate:calendar:;
- (BOOL)isEqualToDowntimeState:;
@end
