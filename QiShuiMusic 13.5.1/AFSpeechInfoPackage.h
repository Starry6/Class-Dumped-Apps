@interface AFSpeechInfoPackage : NSObject
@property (nonatomic) AFVoiceCommandGrammarParsePackage commandGrammarParsePackage;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)commandGrammarParsePackage;
- (id)initWithCommandGrammarParsePackage:;
+ (BOOL)supportsSecureCoding;
@end
