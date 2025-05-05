@interface SFClientTimingFeedback : SFFeedback
@property (nonatomic) NSString input;
@property (nonatomic) NSString eventName;
@property (nonatomic) Q nanosecondInterval;
- (id)input;
- (void)setInput:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)eventName;
- (void)setEventName:;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)nanosecondInterval;
- (void)setNanosecondInterval:;
- (id)initWithEvent:timeInterval:queryId:;
+ (BOOL)supportsSecureCoding;
@end
