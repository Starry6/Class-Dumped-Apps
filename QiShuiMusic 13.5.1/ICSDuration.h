@interface ICSDuration : NSObject
- (long long)seconds;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (double)timeInterval;
- (long long)hours;
- (void)_ICSStringWithOptions:appendingToString:;
- (long long)minutes;
- (BOOL)isNegative;
- (long long)days;
- (long long)weeks;
- (id)ICSStringWithOptions:;
- (id)initWithWeeks:days:hours:minutes:seconds:;
+ (BOOL)supportsSecureCoding;
+ (id)generateDurationFromICSString:;
+ (id)durationFromRFC2445UTF8String:;
+ (id)durationFromICSString:;
@end
