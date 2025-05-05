@interface SAGKWebSearchDomainObject : SAGKDomainObject
@property (nonatomic) NSArray image;
@property (nonatomic) NSArray linkedAnswerGroups;
@property (nonatomic) NSString query;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (void)setImage:;
- (id)encodedClassName;
- (id)image;
- (id)linkedAnswerGroups;
- (void)setLinkedAnswerGroups:;
+ (id)webSearchDomainObject;
+ (id)webSearchDomainObjectWithDictionary:context:;
@end
