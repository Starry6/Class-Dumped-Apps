@interface AFSearchAlarmsRequest : AFSiriRequest
@property (nonatomic) q options;
@property (nonatomic) STAlarm criteria;
- (void)setOptions:;
- (void)setCriteria:;
- (id)criteria;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)options;
- (void).cxx_destruct;
- (id)createResponse;
+ (BOOL)supportsSecureCoding;
@end
