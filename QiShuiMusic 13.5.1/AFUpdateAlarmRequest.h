@interface AFUpdateAlarmRequest : AFSiriRequest
@property (nonatomic) NSArray alarms;
- (id)alarms;
- (void)setAlarms:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)alarm;
- (id)createResponse;
+ (BOOL)supportsSecureCoding;
@end
