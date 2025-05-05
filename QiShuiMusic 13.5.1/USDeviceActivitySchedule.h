@interface USDeviceActivitySchedule : NSObject
@property (nonatomic) NSDateComponents intervalStart;
@property (nonatomic) NSDateComponents intervalEnd;
@property (nonatomic) BOOL repeats;
@property (nonatomic) NSDateComponents warningTime;
@property (nonatomic) NSDateInterval nextInterval;
- (BOOL)repeats;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)nextInterval;
- (id)initWithIntervalStart:intervalEnd:repeats:warningTime:;
- (id)intervalStart;
- (id)intervalEnd;
- (id)warningTime;
+ (BOOL)supportsSecureCoding;
+ (id)nextIntervalForStartComponents:endComponents:;
+ (id)nextWarningDateForComponents:referenceDate:;
@end
