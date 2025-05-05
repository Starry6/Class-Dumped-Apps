@interface AFDeleteAlarmRequest : AFSiriRequest
@property (nonatomic) NSArray alarmIdentifiers;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)createResponse;
- (id)alarmIdentifiers;
- (void)setAlarmIdentifiers:;
+ (BOOL)supportsSecureCoding;
@end
