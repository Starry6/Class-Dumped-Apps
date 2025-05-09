@interface INFPartOfSpeech : INFSentenceToken
@property (nonatomic) NSMutableDictionary variants;
@property (nonatomic) NSString language;
@property (nonatomic) Q partOfSpeechType;
@property (nonatomic) Q gender;
- (id)init;
- (unsigned long long)gender;
- (void)setLanguage:;
- (id)language;
- (id)variants;
- (void)setGender:;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:identifier:;
- (id)dictionaryRepresentation;
- (id)stringForContext:;
- (id)contributingSentenceContext;
- (id)initWithPartOfSpeechType:identifier:language:;
- (void)validateSelf;
- (void)setString:forVariants:;
- (id)stringForVariants:;
- (void)setString:forVariantsDescriptor:;
- (id)stringForVariantsDescriptor:;
- (unsigned long long)partOfSpeechType;
- (void)setPartOfSpeechType:;
- (void)setVariants:;
+ (id)nounWithIdentifier:language:;
+ (id)nounWithGender:identifier:language:;
+ (id)adjectiveWithIdentifier:language:;
@end
