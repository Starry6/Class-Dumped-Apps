@interface SAABMultiPersonSearch : SADomainCommand
@property (nonatomic) NSArray personSearches;
@property (nonatomic) NSNumber resultsLimit;
- (void)setResultsLimit:;
- (id)groupIdentifier;
- (id)resultsLimit;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)personSearches;
- (void)setPersonSearches:;
+ (id)multiPersonSearch;
+ (id)multiPersonSearchWithDictionary:context:;
@end
