@interface CNCollationLanguage : NSObject
@property (nonatomic) NSArray sections;
@property (nonatomic) NSString lastCharacter;
@property (nonatomic) NSString firstCharacterAfterLanguage;
- (id)sections;
- (id)lastCharacter;
- (void).cxx_destruct;
- (id)initWithSections:lastCharacter:firstCharacterAfterLanguage:;
- (id)firstCharacterAfterLanguage;
@end
