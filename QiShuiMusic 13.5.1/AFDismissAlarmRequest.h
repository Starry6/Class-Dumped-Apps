@interface AFDismissAlarmRequest : AFSiriRequest
@property (nonatomic) NSArray alarmURLs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)createResponse;
- (id)alarmURLs;
- (void)setAlarmURLs:;
+ (BOOL)supportsSecureCoding;
@end
