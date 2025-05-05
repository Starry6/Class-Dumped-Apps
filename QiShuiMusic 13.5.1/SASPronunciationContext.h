@interface SASPronunciationContext : AceObject
@property (nonatomic) NSURL domainObjectIdentifier;
@property (nonatomic) NSString domainObjectPropertyIdentifier;
@property (nonatomic) NSString fullName;
@property (nonatomic) NSString language;
@property (nonatomic) NSString orthography;
@property (nonatomic) NSNumber tokenOffset;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fullName;
- (id)groupIdentifier;
- (void)setLanguage:;
- (id)language;
- (void)setFullName:;
- (id)encodedClassName;
- (id)orthography;
- (void)setOrthography:;
- (id)tokenOffset;
- (void)setTokenOffset:;
- (id)domainObjectIdentifier;
- (void)setDomainObjectIdentifier:;
- (id)domainObjectPropertyIdentifier;
- (void)setDomainObjectPropertyIdentifier:;
+ (id)pronunciationContext;
+ (id)pronunciationContextWithDictionary:context:;
@end
