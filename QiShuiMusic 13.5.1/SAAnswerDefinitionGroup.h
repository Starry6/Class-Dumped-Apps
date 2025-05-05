@interface SAAnswerDefinitionGroup : AceObject
@property (nonatomic) NSArray definitionEntries;
@property (nonatomic) NSString origin;
@property (nonatomic) NSString partOfSpeech;
@property (nonatomic) NSArray synonyms;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setOrigin:;
- (id)groupIdentifier;
- (id)origin;
- (id)synonyms;
- (id)encodedClassName;
- (void)setSynonyms:;
- (id)partOfSpeech;
- (void)setPartOfSpeech:;
- (id)definitionEntries;
- (void)setDefinitionEntries:;
+ (id)definitionGroup;
+ (id)definitionGroupWithDictionary:context:;
@end
