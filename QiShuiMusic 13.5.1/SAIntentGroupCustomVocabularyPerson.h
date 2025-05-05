@interface SAIntentGroupCustomVocabularyPerson : AceObject
@property (nonatomic) NSString firstName;
@property (nonatomic) NSString lastName;
@property (nonatomic) NSString middleName;
@property (nonatomic) NSString nickname;
@property (nonatomic) NSString relationship;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setLastName:;
- (id)groupIdentifier;
- (id)relationship;
- (void)setFirstName:;
- (void)setRelationship:;
- (id)firstName;
- (id)middleName;
- (id)lastName;
- (id)nickname;
- (id)encodedClassName;
- (void)setNickname:;
- (void)setMiddleName:;
+ (id)customVocabularyPerson;
+ (id)customVocabularyPersonWithDictionary:context:;
@end
