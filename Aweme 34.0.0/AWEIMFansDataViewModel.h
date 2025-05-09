@interface AWEIMFansDataViewModel : AWEIMFansBaseViewModel
@property (nonatomic) BOOL isUnreadCountSetFromDataFetch;
@property (nonatomic) NSMutableDictionary operationsInCache;
@property (nonatomic) BOOL dataSourceChanging;
@property (nonatomic) BOOL hasFetchedData;
@property (nonatomic) AWEIMNotificationListDataController fansDataController;
@property (nonatomic) NSMutableArray cellViewModels;
@property (nonatomic) AWEPerformanceMeasureTask loadMorePerformanceTask;
- (BOOL)isRequestOnAir;
- (id)vcdToastText;
- (void)loadMoreDataWithCompletion:;
- (BOOL)hasFetchedData;
- (void)setLoadMorePerformanceTask:;
- (id)loadMorePerformanceTask;
- (id)fansDataController;
- (void)setFansDataController:;
- (id)cellViewModels;
- (void)setCellViewModels:;
- (void)refreshDataByPullDown:;
- (BOOL)dataSourceChanging;
- (void)setDataSourceChanging:;
- (id)cacheModelForUID:;
- (void)refreshUnreadCountWithDataSource:;
- (void)setIsUnreadCountSetFromDataFetch:;
- (void)setHasFetchedData:;
- (id)fansDataSourceUserIDs;
- (BOOL)isUnreadCountSetFromDataFetch;
- (id)operationsInCache;
- (BOOL)isFansNoticeCacheExpired;
- (void)setOperationsInCache:;
- (id)p_createDisposableRefreshDataLoader:;
- (void)fetchFansNoticeCache:;
- (void)fetchContactKeys:;
- (void)fetchFansNoticeServer:;
- (void)fetchRecommendData:;
- (void)refreshDataCompletion:;
- (void)updateCellViewModels:needReset:;
- (void)p_deleteTheRemovingNoticeIDOfSnackbar;
- (void)p_updateUsersByOperationDic;
- (BOOL)p_enableReloadTabelViewAfterFetchServer:withList:;
- (void)p_udpateLastReadNewFansNoticeID;
- (unsigned long long)fansNoticeCount;
- (void)updateOfficialChatNoti;
- (void)removeCellViewModelAtIndex:;
- (void)recordOperationBeforeFinishFetchWithUser:operationType:newfollowStatus:;
- (void)removeNoticeIDInCache:;
- (void)insertCellViewModel:atIndex:;
- (void)setUnreadCount:;
- (BOOL)hasMore;
- (void).cxx_destruct;
- (void)refreshData;
@end
