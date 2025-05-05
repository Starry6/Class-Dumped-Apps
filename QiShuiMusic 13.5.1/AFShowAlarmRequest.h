@interface AFShowAlarmRequest : AFSiriRequest
@property (nonatomic) NSArray alarms;
- (id)alarms;
- (void)setAlarms:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)createResponse;
+ (BOOL)supportsSecureCoding;
@end
