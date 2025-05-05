@interface AFUpdateAlarmResponse : AFSiriResponse
@property (nonatomic) NSArray alarmIdentifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (void)setAlarmIdentifier:;
- (id)alarmIdentifiers;
- (void)setAlarmIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
