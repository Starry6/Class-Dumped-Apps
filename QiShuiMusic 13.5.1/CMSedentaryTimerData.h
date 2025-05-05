@interface CMSedentaryTimerData : NSObject
@property (nonatomic) NSDate startDate;
@property (nonatomic) NSDate firedDate;
@property (nonatomic) q alarmType;
@property (nonatomic) BOOL didWake;
- (id)startDate;
- (id)initWithCoder:;
- (id)firedDate;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (BOOL)didWake;
- (id)initWithStartDate:firedDate:alarmType:didWake:;
- (long long)alarmType;
+ (BOOL)supportsSecureCoding;
@end
