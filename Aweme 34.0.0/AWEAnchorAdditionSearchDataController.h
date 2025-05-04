@interface AWEAnchorAdditionSearchDataController : AWEListDataController
@property (nonatomic) q anchorType;
@property (nonatomic) q page;
@property (nonatomic) AWEAnchorAdditionListModel listModel;
- (id)initWithAnchorBusinessType:;
- (void)fetchSearchGameDataSourceWithKeyword:page:completion:;
- (void)refreshWithKeyword:completion:;
- (void)loadMoreWithKeyword:completion:;
- (long long)page;
- (void)setListModel:;
- (id)listModel;
- (void).cxx_destruct;
- (long long)anchorType;
- (void)setPage:;
- (void)setAnchorType:;
@end
