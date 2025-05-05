@interface SAAnswerDictionaryStructuredAnswer : AceObject
@property (nonatomic) NSString category;
@property (nonatomic) NSArray definitionGroups;
@property (nonatomic) NSString phoneticPronunciation;
@property (nonatomic) NSURL sound;
@property (nonatomic) NSArray syllables;
@property (nonatomic) NSString word;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setSound:;
- (id)sound;
- (void)setCategory:;
- (id)encodedClassName;
- (id)category;
- (id)word;
- (void)setWord:;
- (id)definitionGroups;
- (void)setDefinitionGroups:;
- (id)phoneticPronunciation;
- (void)setPhoneticPronunciation:;
- (id)syllables;
- (void)setSyllables:;
+ (id)dictionaryStructuredAnswer;
+ (id)dictionaryStructuredAnswerWithDictionary:context:;
@end
