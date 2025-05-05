@interface ICSDateTimeValue : ICSDateValue
@property (nonatomic) q hour;
@property (nonatomic) q minute;
@property (nonatomic) q second;
- (long long)minute;
- (long long)hour;
- (id)components;
- (long long)second;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void)_ICSStringWithOptions:appendingToString:;
- (int)dateType;
- (id)initWithYear:month:day:hour:minute:second:;
- (id)initWithYear:month:day:;
+ (BOOL)supportsSecureCoding;
@end
