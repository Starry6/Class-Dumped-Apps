@interface SFDidGoToSearchFeedback : SFFeedback
@property (nonatomic) NSString input;
@property (nonatomic) Q endpoint;
@property (nonatomic) Q triggerEvent;
- (id)input;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (void)setInput:;
- (void)setEndpoint:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (unsigned long long)endpoint;
- (id)initWithInput:endpoint:;
+ (BOOL)supportsSecureCoding;
@end
