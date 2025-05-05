@interface PSKeyboardNavigationSearchController : UISearchController
@property (nonatomic) PSKeyboardNavigationSearchBar searchBar;
@property (nonatomic) UIViewController<PSKeyboardNavigationSearchResultsController> searchResultsController;
- (void)_escapeKeyPressed;
- (void)setSearchResultsController:;
- (void)_upArrowKeyPressed;
- (void)setSearchBar:;
- (id)searchBar;
- (id)searchResultsController;
- (void).cxx_destruct;
- (void)_downArrowKeyPressed;
- (id)initWithSearchResultsController:;
@end
