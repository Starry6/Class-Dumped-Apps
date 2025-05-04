@interface AWEListenFeedFilterListViewModel : AWEBaseListViewModel
@property (nonatomic) AWEListDataController dataController;
@property (nonatomic) q count;
@property (nonatomic) AWEListenFeedFilterListContext context;
- (void)loadMoreListData;
- (void)setDataController:;
- (long long)cellNumber;
- (void)syncDataIfNeed;
- (id)init;
- (void)setCount:;
- (long long)count;
- (BOOL)isEmpty;
- (void)setContext:;
- (void).cxx_destruct;
- (id)context;
- (id)dataController;
- (void)setupWithContext:;
@end
