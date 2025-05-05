@interface AFCreateAlarmResponse : AFSiriResponse
@property (nonatomic) NSString alarmIdentifier;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAlarmIdentifier:;
- (id)alarmIdentifier;
+ (BOOL)supportsSecureCoding;
@end
