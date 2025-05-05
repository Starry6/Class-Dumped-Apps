@interface ICSByDayValue : NSObject
@property (nonatomic) q weekday;
@property (nonatomic) NSNumber number;
- (id)number;
- (id)initWithCoder:;
- (void)setNumber:;
- (void)encodeWithCoder:;
- (void)_ICSStringWithOptions:appendingToString:;
- (long long)compare:;
- (void).cxx_destruct;
- (void)setWeekday:;
- (long long)weekday;
- (id)initWithWeekday:number:;
- (id)initWithWeekday:;
+ (BOOL)supportsSecureCoding;
+ (long long)weekdayFromICSString:;
+ (id)byDayValueFromICSString:;
@end
