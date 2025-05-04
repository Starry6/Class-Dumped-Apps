@interface AWETeenPrivateWorkListDataController : AWEListDataController
@property (nonatomic) q cursor;
@property (nonatomic) NSMutableArray justRemovedModelList;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)justRemovedModelList;
- (void)setJustRemovedModelList:;
- (void)p_loadPrivateWorkListCompletion:;
- (void)updateNewestPrivateWork;
- (long long)cursor;
- (id)init;
- (void)removeAll;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
