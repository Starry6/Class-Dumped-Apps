@interface AWECommonUserListViewModel : AWEBaseListViewModel
@property (nonatomic) BOOL hasMore;
@property (nonatomic) AWECommonUserListBaseSectionViewModel listVM;
@property (nonatomic) BOOL hiddenMJFooter;
- (void)fetchListData;
- (void)loadMoreListData;
- (void)setupViewModel;
- (id)listVM;
- (void)addBinding;
- (BOOL)hiddenMJFooter;
- (void)setListVM:;
- (void)setHiddenMJFooter:;
- (BOOL)hasMore;
- (void).cxx_destruct;
@end
