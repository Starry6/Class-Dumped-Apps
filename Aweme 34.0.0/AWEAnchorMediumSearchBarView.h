@interface AWEAnchorMediumSearchBarView : UIView
@property (nonatomic) UIButton searchCancelButton;
@property (nonatomic) AWESearchBar searchBar;
- (void)showSearchCancelButton;
- (void)hideSearchCancelButton;
- (id)searchCancelButton;
- (void)searchCancelButtonTapped:;
- (void)setSearchCancelButton:;
- (id)searchBar;
- (void)setSearchBar:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setupSearchBar;
- (void)updateText:;
@end
