@interface AFSetTimerRequest : AFSiriRequest
@property (nonatomic) STTimer timer;
- (id)initWithCoder:;
- (void)setTimer:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timer;
- (id)createResponse;
+ (BOOL)supportsSecureCoding;
@end
