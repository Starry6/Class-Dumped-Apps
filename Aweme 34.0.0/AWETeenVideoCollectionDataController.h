@interface AWETeenVideoCollectionDataController : AWEListDataController
@property (nonatomic) Q cursor;
@property (nonatomic) NSMutableArray justRemovedModelList;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (void)removeWithItemID:;
- (BOOL)addAwemeWithItemID:;
- (id)justRemovedModelList;
- (void)setJustRemovedModelList:;
- (void)p_reportAwemeVideoNotTeen:;
- (void)p_fetchWithPullType:completion:;
- (BOOL)p_isValidRequest;
- (id)p_requestParamsIsRefresh:;
- (unsigned long long)cursor;
- (id)init;
- (void)removeAll;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (id)copyWithZone:;
@end
