@interface TUCallHistorySearchModule : NSObject
@property (nonatomic) NSMutableArray currentResultsList;
@property (nonatomic) NSString previousSearchString;
@property (nonatomic) BOOL searchComplete;
@property (nonatomic) TUSearchResults searchResults;
@property (nonatomic) TUSearchController searchController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cancelSearch;
- (void)setSearchController:;
- (id)searchResults;
- (void).cxx_destruct;
- (id)searchController;
- (void)setSearchComplete:;
- (void)searchForString:completion:;
- (BOOL)isSearchComplete;
- (id)currentResultsList;
- (void)setCurrentResultsList:;
- (id)previousSearchString;
- (void)setPreviousSearchString:;
@end
