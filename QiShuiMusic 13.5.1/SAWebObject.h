@interface SAWebObject : SADomainObject
@property (nonatomic) NSString query;
@property (nonatomic) SAWebWebSearchResult results;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (id)results;
- (id)encodedClassName;
- (void)setResults:;
+ (id)object;
+ (id)objectWithDictionary:context:;
@end
