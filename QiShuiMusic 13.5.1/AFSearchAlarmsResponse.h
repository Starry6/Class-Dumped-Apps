@interface AFSearchAlarmsResponse : AFSiriResponse
@property (nonatomic) NSArray results;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)results;
- (void).cxx_destruct;
- (void)setResults:;
+ (BOOL)supportsSecureCoding;
@end
