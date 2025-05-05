@interface SAUSCardSection : SADomainObject
@property (nonatomic) SAUIAppPunchOut punchOut;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPunchOut:;
- (id)punchOut;
+ (id)cardSection;
+ (id)cardSectionWithDictionary:context:;
@end
