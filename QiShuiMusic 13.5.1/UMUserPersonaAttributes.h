@interface UMUserPersonaAttributes : NSObject
@property (nonatomic) NSURL personaLayoutPathURL;
@property (nonatomic) NSString userPersonaUniqueString;
@property (nonatomic) Q userPersonaType;
@property (nonatomic) I userPersona_id;
@property (nonatomic) BOOL isEnterprisePersona;
@property (nonatomic) BOOL isPersonalPersona;
@property (nonatomic) BOOL isUniversalPersona;
@property (nonatomic) BOOL isSystemPersona;
@property (nonatomic) BOOL isDefaultPersona;
@property (nonatomic) BOOL isGuestPersona;
@property (nonatomic) BOOL isDataSeparatedPersona;
@property (nonatomic) BOOL isDisabled;
@property (nonatomic) NSString userPersonaDisplayName;
@property (nonatomic) NSArray userPersonaBundleIDList;
@property (nonatomic) NSDate creationDate;
@property (nonatomic) NSDate lastLoginDate;
@property (nonatomic) NSDate lastDisableDate;
@property (nonatomic) NSDate lastEnableDate;
- (id)lastLoginDate;
- (BOOL)isEnterprisePersona;
- (BOOL)isUniversalPersona;
- (BOOL)isDisabled;
- (BOOL)isDataSeparatedPersona;
- (void)setUserPersonaBundleIDList:;
- (void)setLastDisableDate:;
- (void)setIsDefaultPersona:;
- (void)setUserPersonaDisplayName:;
- (void)setCreationDate:;
- (void)setIsDisabled:;
- (void)setIsSystemPersona:;
- (void)setIsGuestPersona:;
- (void)setUserPersonaType:;
- (void)setLastLoginDate:;
- (void)setPropertiesFromUserPersona:;
- (BOOL)isDefaultPersona;
- (id)userPersonaDisplayName;
- (void)setIsDataSeparatedPersona:;
- (BOOL)isPersonalPersona;
- (void)setLastEnableDate:;
- (void)setUserPersona_id:;
- (void)setPersonaLayoutPathURL:;
- (id)lastEnableDate;
- (void)setUserPersonaUniqueString:;
- (void).cxx_destruct;
- (id)userPersonaBundleIDList;
- (unsigned int)userPersona_id;
- (id)userPersonaUniqueString;
- (id)sandboxExtensionForPersonaLayoutPath;
- (id)description;
- (id)personaLayoutPathURL;
- (BOOL)isSystemPersona;
- (id)lastDisableDate;
- (void)setIsUniversalPersona:;
- (void)setIsEnterprisePersona:;
- (void)setIsPersonalPersona:;
- (BOOL)isGuestPersona;
- (unsigned long long)userPersonaType;
- (id)copyWithZone:;
- (id)creationDate;
+ (id)personaAttributes;
+ (id)currentContextIdentifier;
+ (id)personaAttributesForPersonaType:withError:;
+ (id)personaAttributesForPersonaUniqueString:withError:;
+ (id)personaAttributesForPersonaType:;
+ (id)personaAttributesForPersonaUniqueString:;
+ (id)personaAttributesForIdentifier:;
+ (id)setUpPersonaAttributesWithDictionary:;
@end
