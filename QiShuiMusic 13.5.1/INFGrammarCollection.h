@interface INFGrammarCollection : NSObject
@property (nonatomic) NSMutableDictionary tokensDictionary;
@property (nonatomic) NSMutableDictionary sentencesDictionary;
@property (nonatomic) NSArray sentences;
@property (nonatomic) NSArray tokens;
- (void)addSentence:;
- (void)setTokensDictionary:;
- (id)init;
- (id)createAdjectiveWithIdentifier:language:;
- (id)initWithDictionary:;
- (id)tokenWithIdentifier:;
- (id)createSentenceWithIdentifier:;
- (id)createNounWithIdentifier:language:;
- (id)sentencesDictionary;
- (void)addToken:;
- (void).cxx_destruct;
- (id)initWithGrammarCollectionNamed:bundle:language:;
- (id)sentenceWithIdentifier:;
- (void)setSentencesDictionary:;
- (id)sentences;
- (id)tokensDictionary;
- (id)dictionaryRepresentation;
- (void)writeToFileAtPath:;
- (id)createNounWithGender:identifier:language:;
- (id)tokens;
+ (id)grammarCollection;
+ (id)grammarCollectionNamed:bundle:;
+ (id)grammarCollectionNamed:bundle:language:;
@end
