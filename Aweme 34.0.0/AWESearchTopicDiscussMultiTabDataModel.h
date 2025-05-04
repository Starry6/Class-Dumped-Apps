@interface AWESearchTopicDiscussMultiTabDataModel : NSObject
@property (nonatomic) AWESearchCachalotDataController dataController;
@property (nonatomic) NSArray viewModelList;
@property (nonatomic) q loadMoreFooterState;
@property (nonatomic) {CGPoint=dd} contentOffset;
@property (nonatomic) BOOL enableCancelRequestingLoadMore;
@property (nonatomic) BOOL forceDisableAsyncLoadMore;
@property (nonatomic) BOOL pullRefreshHeaderEnable;
- (void)setDataController:;
- (BOOL)enableCancelRequestingLoadMore;
- (id)viewModelList;
- (void)setViewModelList:;
- (BOOL)forceDisableAsyncLoadMore;
- (void)setForceDisableAsyncLoadMore:;
- (void)setEnableCancelRequestingLoadMore:;
- (long long)loadMoreFooterState;
- (void)setLoadMoreFooterState:;
- (BOOL)pullRefreshHeaderEnable;
- (void)setPullRefreshHeaderEnable:;
- (void)setContentOffset:;
- (id)contentOffset;
- (void).cxx_destruct;
- (id)dataController;
@end
