@interface SAMPSearch : SADomainCommand
@property (nonatomic) NSArray constraints;
@property (nonatomic) q maxResults;
@property (nonatomic) NSArray searchTypes;
@property (nonatomic) BOOL strict;
- (id)groupIdentifier;
- (id)constraints;
- (BOOL)requiresResponse;
- (void)setConstraints:;
- (id)searchTypes;
- (id)encodedClassName;
- (void)setMaxResults:;
- (void)setSearchTypes:;
- (long long)maxResults;
- (BOOL)mutatingCommand;
- (BOOL)strict;
- (void)setStrict:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
