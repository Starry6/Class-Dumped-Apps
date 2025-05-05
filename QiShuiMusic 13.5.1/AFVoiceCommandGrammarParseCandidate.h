@interface AFVoiceCommandGrammarParseCandidate : NSObject
@property (nonatomic) NSString commandId;
@property (nonatomic) BOOL isComplete;
@property (nonatomic) NSDictionary paramMatches;
- (BOOL)isComplete;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)commandId;
- (id)paramMatches;
- (id)initWithCommandId:isComplete:paramMatches:;
+ (BOOL)supportsSecureCoding;
@end
