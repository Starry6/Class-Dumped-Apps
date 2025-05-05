@interface AFDismissTimerRequest : AFSiriRequest
@property (nonatomic) NSArray timerURLs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)createResponse;
- (id)timerURLs;
- (void)setTimerURLs:;
+ (BOOL)supportsSecureCoding;
@end
