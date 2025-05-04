@interface AWESkylightUnreadSearchBarSectionViewModel : AWECommonUserListBaseSectionViewModel
@property (nonatomic) NSString searchText;
@property (nonatomic) BOOL searching;
@property (nonatomic) BOOL tracked;
- (id)enterFrom;
- (id)modelsArray;
- (void)fetchSectionData;
- (void)loadMoreSectionData;
- (BOOL)tracked;
- (void)setTracked:;
- (void).cxx_destruct;
- (void)setSearchText:;
- (id)searchText;
- (id)previousPage;
- (BOOL)searching;
- (void)setSearching:;
@end
