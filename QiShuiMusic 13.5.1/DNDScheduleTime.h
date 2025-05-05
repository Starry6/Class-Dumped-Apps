@interface DNDScheduleTime : NSObject
@property (nonatomic) Q hour;
@property (nonatomic) Q minute;
- (unsigned long long)minute;
- (unsigned long long)hour;
- (id)init;
- (id)dateComponents;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (id)_initWithHour:minute:;
- (id)description;
- (id)mutableCopyWithZone:;
- (BOOL)isEqual:;
- (id)_initWithTime:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)defaultEndTime;
+ (id)defaultStartTime;
@end
