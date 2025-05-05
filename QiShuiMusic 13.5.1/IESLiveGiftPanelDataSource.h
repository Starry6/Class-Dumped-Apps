@interface IESLiveGiftPanelDataSource : NSObject
@property (nonatomic) NSMutableDictionary remainingGiftIDsMap;
@property (nonatomic) NSDictionary requestCountForPageMap;
@property (nonatomic) NSMutableDictionary fetchIncrementalGiftListTaskMap;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)fetchIncrementalGiftListTaskMap;
- (BOOL)canLoadMoreGiftForPage:;
- (void)cancelAllAutoIncrementalFetchTasks;
- (void)fetchIncrementalGiftsForPage:completion:;
- (BOOL)isRequesting;
- (id)remainingGiftIDsMap;
- (id)requestCountForPageMap;
- (void)resetAllRemainingGiftIDs;
- (void)scheduleAutoIncrementalFetchTasksForPage:;
- (void)setFetchIncrementalGiftListTaskMap:;
- (void)setIsRequesting:;
- (void)setRemainingGiftIDsMap:;
- (void)setRequestCountForPageMap:;
- (void)updateRemainingGiftIDsForPage:giftIDs:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
@end
