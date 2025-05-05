@interface SwiftUI.SwiftUISearchController : UISearchController
@property (nonatomic) UISearchBar searchBar;
- (id)init;
- (void)updateSearchResultsForSearchController:;
- (void)updateSearchResultsForSearchController:selectingSearchSuggestion:;
- (id)initWithCoder:;
- (id)searchBar;
- (void)searchController:willChangeToSearchBarPlacement:;
- (void).cxx_destruct;
- (id)initWithSearchResultsController:;
- (id)initWithNibName:bundle:;
@end
