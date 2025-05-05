@interface AFGetTimerResponse : AFSiriResponse
@property (nonatomic) STTimer timer;
- (id)initWithCoder:;
- (void)setTimer:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)timer;
+ (BOOL)supportsSecureCoding;
@end
