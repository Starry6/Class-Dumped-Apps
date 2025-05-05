@interface SiriTTSPhonemeRequest : SiriTTSBaseRequest
@property (nonatomic) NSString text;
@property (nonatomic) SiriTTSSynthesisVoice voice;
@property (nonatomic) q phonemeSystem;
@property (nonatomic) NSString description;
- (id)init;
- (void)setVoice:;
- (void)setText:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)voice;
- (void).cxx_destruct;
- (id)description;
- (id)text;
- (long long)phonemeSystem;
- (void)setPhonemeSystem:;
- (id)initWithText:voice:phonemeSystem:;
+ (BOOL)supportsSecureCoding;
@end
