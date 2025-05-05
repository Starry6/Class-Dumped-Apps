@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask
@property (nonatomic) NSSet searchTypes;
@property (nonatomic) NSSet searchStrings;
@property (nonatomic) CalDAVPrincipalSearchPropertySet serverSupportSet;
@property (nonatomic) @ searchContext;
- (void)setSearchStrings:;
- (void)setSearchContext:;
- (id)extraAttributes;
- (id)initWithSearchStrings:searchTypes:serverSupportSet:atURL:;
- (id)searchTypes;
- (id)searchItems;
- (id)searchStrings;
- (void).cxx_destruct;
- (id)serverSupportSet;
- (void)setServerSupportSet:;
- (void)setSearchTypes:;
- (id)searchContext;
@end
