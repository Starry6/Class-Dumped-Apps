@interface DNDScheduleTimePeriod : NSObject
@property (nonatomic) DNDScheduleTime startTime;
@property (nonatomic) DNDScheduleTime endTime;
@property (nonatomic) Q weekdays;
- (id)init;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)startTime;
- (id)endTime;
- (void)encodeWithCoder:;
- (id)_initWithPeriod:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)weekdays;
- (id)mutableCopyWithZone:;
- (id)_initWithStartTime:endTime:weekdays:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
