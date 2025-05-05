@interface AFCreateAlarmRequest : AFSiriRequest
@property (nonatomic) STAlarm alarm;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)alarm;
- (void)setAlarm:;
- (id)createResponse;
+ (BOOL)supportsSecureCoding;
@end
