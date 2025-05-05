@interface SAWebSiteSearch : SADomainCommand
@property (nonatomic) NSString provider;
@property (nonatomic) NSString query;
- (void)setProvider:;
- (id)groupIdentifier;
- (void)setQuery:;
- (id)query;
- (BOOL)requiresResponse;
- (id)provider;
- (id)encodedClassName;
+ (id)siteSearch;
+ (id)siteSearchWithDictionary:context:;
@end
