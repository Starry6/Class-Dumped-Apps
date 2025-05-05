@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask
@property (nonatomic) NSSet searchItems;
@property (nonatomic) NSDictionary extraAttributes;
@property (nonatomic) BOOL applyToPrincipalCollectionSet;
- (id)requestBody;
- (void)setExtraAttributes:;
- (id)extraAttributes;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)initWithPropertiesToFind:atURL:;
- (id)searchItems;
- (BOOL)applyToPrincipalCollectionSet;
- (void)setSearchItems:;
- (void).cxx_destruct;
- (id)initWithPropertySearches:propertiesToFind:atURL:applyToPrincipalCollectionSet:extraAttributes:;
- (void)setApplyToPrincipalCollectionSet:;
@end
