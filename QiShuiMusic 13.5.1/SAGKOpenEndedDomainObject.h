@interface SAGKOpenEndedDomainObject : SAGKDomainObject
@property (nonatomic) SAGKDirectAnswer directAnswer;
@property (nonatomic) NSArray image;
@property (nonatomic) NSArray linkedAnswerGroups;
@property (nonatomic) NSArray structuredAnswers;
- (id)groupIdentifier;
- (void)setImage:;
- (id)encodedClassName;
- (id)image;
- (id)directAnswer;
- (void)setDirectAnswer:;
- (id)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:;
- (id)structuredAnswers;
- (void)setStructuredAnswers:;
+ (id)openEndedDomainObject;
+ (id)openEndedDomainObjectWithDictionary:context:;
@end
