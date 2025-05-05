@interface SFDidGoToSiteFeedback : SFFeedback
@property (nonatomic) NSString input;
@property (nonatomic) Q triggerEvent;
- (id)input;
- (id)initWithInput:;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (void)setInput:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
+ (BOOL)supportsSecureCoding;
@end
