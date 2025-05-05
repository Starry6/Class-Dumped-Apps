@interface SANPVideoLanguageOption : AceObject
@property (nonatomic) NSArray characteristics;
@property (nonatomic) NSString displayName;
@property (nonatomic) NSString identifier;
@property (nonatomic) NSString languageTag;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)languageTag;
- (void)setLanguageTag:;
- (id)groupIdentifier;
- (id)identifier;
- (void)setDisplayName:;
- (id)displayName;
- (id)characteristics;
- (id)encodedClassName;
- (void)setCharacteristics:;
- (void)setIdentifier:;
+ (id)_languageOptionFromMediaRemoteRepresentation:;
+ (id)languageOption;
+ (id)languageOptionWithDictionary:context:;
@end
