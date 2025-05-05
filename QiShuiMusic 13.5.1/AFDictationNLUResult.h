@interface AFDictationNLUResult : NSObject
@property (nonatomic) SIRINLUEXTERNALCDMNluResponse nluResponse;
@property (nonatomic) AFVoiceCommandGrammarParsePackage commandGrammarParsePackage;
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)commandGrammarParsePackage;
- (id)nluResponse;
- (void)setNluResponse:;
- (void)setCommandGrammarParsePackage:;
+ (BOOL)supportsSecureCoding;
@end
