@interface SAAnswerDomainObject : SADomainObject
@property (nonatomic) SAUIAppPunchOut appPunchOut;
@property (nonatomic) NSString category;
@property (nonatomic) SAAnswerDirectAnswer directAnswer;
@property (nonatomic) NSArray linkedAnswerGroups;
@property (nonatomic) NSArray structuredAnswers;
- (id)groupIdentifier;
- (void)setCategory:;
- (id)encodedClassName;
- (id)category;
- (id)appPunchOut;
- (void)setAppPunchOut:;
- (id)directAnswer;
- (void)setDirectAnswer:;
- (id)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:;
- (id)structuredAnswers;
- (void)setStructuredAnswers:;
+ (id)domainObject;
+ (id)domainObjectWithDictionary:context:;
@end
