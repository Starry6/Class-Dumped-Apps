@interface AVSpeechSynthesisProviderRequest : NSObject
@property (nonatomic) NSString ssmlRepresentation;
@property (nonatomic) AVSpeechSynthesisProviderVoice voice;
- (void)setVoice:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)voice;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithSSMLRepresentation:voice:;
- (id)ssmlRepresentation;
- (void)setSsmlRepresentation:;
+ (BOOL)supportsSecureCoding;
@end
