@interface SFClearInputFeedback : SFFeedback
@property (nonatomic) Q triggerEvent;
- (void)setTriggerEvent:;
- (unsigned long long)triggerEvent;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithEvent:;
+ (BOOL)supportsSecureCoding;
@end
