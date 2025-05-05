@interface SFCardViewDisappearFeedback : SFFeedback
@property (nonatomic) SFCard card;
@property (nonatomic) Q cardDisappearEvent;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithEvent:;
- (id)card;
- (unsigned long long)cardDisappearEvent;
- (void)setCardDisappearEvent:;
- (id)initWithCard:event:;
+ (BOOL)supportsSecureCoding;
@end
