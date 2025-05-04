@interface AWEIMFansRecommendViewModel : AWEIMFansBaseViewModel
@property (nonatomic) <AWEUserRecommendTableViewModelProtocol> recommendTableViewModel;
@property (nonatomic) <AWEUserRecommendTableDataSourceProtocol> recommendSnapshot;
- (void)trackListStartRefreshing;
- (BOOL)wasRecommendClosed;
- (BOOL)enableShowRecommendSection;
- (id)recommendSnapshot;
- (void)setRecommendSnapshot:;
- (BOOL)shouldShowRecommendSection;
- (void)updateRecommendFilterUIDIfCanUseCache:refreshByPullDown:;
- (void)applyRecommendSnapShotToProvider;
- (void)monitorListBeginRefreshing;
- (void)fetchRecommendData:;
- (void)removeDuplicateRecommendUIDS:;
- (id)recommendTableViewModel;
- (void)monitorListEndRefreshing;
- (void)setLastHasRecommendData:;
- (BOOL)showRecommendPlaceHolder;
- (void)setRecommendTableViewModel:;
- (void).cxx_destruct;
@end
