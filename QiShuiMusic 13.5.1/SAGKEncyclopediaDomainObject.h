@interface SAGKEncyclopediaDomainObject : SAGKDomainObject
@property (nonatomic) NSArray linkedAnswerGroups;
@property (nonatomic) NSString name;
@property (nonatomic) NSString nameAnnotation;
@property (nonatomic) NSArray structuredAnswers;
- (void)setName:;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)name;
- (id)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:;
- (id)structuredAnswers;
- (void)setStructuredAnswers:;
- (id)nameAnnotation;
- (void)setNameAnnotation:;
+ (id)encyclopediaDomainObject;
+ (id)encyclopediaDomainObjectWithDictionary:context:;
@end
