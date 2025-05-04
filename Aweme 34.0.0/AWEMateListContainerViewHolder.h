@interface AWEMateListContainerViewHolder : AWEBaseListViewHolder
@property (nonatomic) DUXSearchBar searchBar;
- (void)setupViewHolder;
- (void)updatePlaceholder:;
- (id)searchBar;
- (void)setSearchBar:;
- (double)headerViewHeight;
- (void)updateLayout;
- (void).cxx_destruct;
- (void)showSearchBar;
- (void)hideSearchBar;
@end
