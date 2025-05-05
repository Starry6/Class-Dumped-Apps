@interface AFVoiceCommandGrammarParseResult : NSObject
@property (nonatomic) NSString utterance;
@property (nonatomic) NSArray parseCandidates;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)parseCandidates;
- (id)utterance;
- (id)initWithUtterance:parseCandidates:;
+ (BOOL)supportsSecureCoding;
@end
