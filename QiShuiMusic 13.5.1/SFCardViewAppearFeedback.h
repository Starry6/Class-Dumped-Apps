@interface SFCardViewAppearFeedback : SFFeedback
@property (nonatomic) SFCard card;
@property (nonatomic) I level;
@property (nonatomic) NSString fbr;
- (void)setLevel:;
- (unsigned int)level;
- (void)setCard:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)card;
- (id)fbr;
- (void)setFbr:;
- (id)initWithCard:;
+ (BOOL)supportsSecureCoding;
@end
