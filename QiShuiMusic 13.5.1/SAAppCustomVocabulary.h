@interface SAAppCustomVocabulary : SADomainObject
@property (nonatomic) NSString intentSlotValue;
@property (nonatomic) <SAIntentGroupCustomVocabularyEntity> vocabularyEntity;
@property (nonatomic) NSString vocabularyIdentifier;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)vocabularyIdentifier;
- (void)setVocabularyIdentifier:;
- (id)intentSlotValue;
- (void)setIntentSlotValue:;
- (id)vocabularyEntity;
- (void)setVocabularyEntity:;
+ (id)appCustomVocabulary;
+ (id)appCustomVocabularyWithDictionary:context:;
@end
