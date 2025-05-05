@interface SAUSSection : SADomainObject
@property (nonatomic) NSArray cardResults;
@property (nonatomic) NSArray genericResults;
@property (nonatomic) SAUIAppPunchOut punchOut;
@property (nonatomic) NSString sectionTitle;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setPunchOut:;
- (id)punchOut;
- (id)sectionTitle;
- (void)setSectionTitle:;
- (id)cardResults;
- (void)setCardResults:;
- (id)genericResults;
- (void)setGenericResults:;
+ (id)section;
+ (id)sectionWithDictionary:context:;
@end
