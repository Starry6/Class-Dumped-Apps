@interface AWEFansListSearchBarSectionViewModel : AWEBaseListSectionViewModel
@property (nonatomic) NSString searchText;
@property (nonatomic) BOOL searching;
@property (nonatomic) BOOL tracked;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (BOOL)tracked;
- (void)setTracked:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
- (BOOL)searching;
- (void)setSearching:;
@end
