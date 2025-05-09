@interface IESLiveWaitingListService : NSObject
@property (nonatomic) HTSLiveInteractiveAPI linkmicAPI;
@property (nonatomic) NSString waitingListNextCursor;
@property (nonatomic) NSString paidWaitingListNextCursor;
@property (nonatomic) BOOL enableApplyListLoadMore;
@property (nonatomic) BOOL enablePaidWaitingListLoadMore;
@property (nonatomic) BOOL isLoadMoreList;
@property (nonatomic) Q userListType;
@property (nonatomic) NSInteger userListStatus;
@property (nonatomic) NSMutableDictionary requestTimeMap;
@property (nonatomic) NSCache getWaitingUserInfoRequestThrottler;
@property (nonatomic) NSMutableArray waitingList;
@property (nonatomic) NSMutableArray paidWaitingList;
@property (nonatomic) NSMutableArray allWaitingList;
@property (nonatomic) NSInteger waitingListSortStrategy;
@property (nonatomic) NSInteger paidWaitingListSortStrategy;
@property (nonatomic) IESLiveWaitingListUser waitingUser;
@property (nonatomic) IESLiveWaitingListUser paidWaitingUser;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) <IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) NSDictionary waitingOffsetInfo;
@property (nonatomic) NSDictionary applyWaitingTrackInfo;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (nonatomic) HTSEventContext trackContext;
@property (nonatomic) q totalCount;
@property (nonatomic) q waitingListTotalCount;
@property (nonatomic) q paidWaitingListTotalCount;
@property (nonatomic) BOOL showPaidListTab;
@property (nonatomic) BOOL selectedPaidListTab;
@property (nonatomic) BOOL hasLinkPaidGuidence;
@property (nonatomic) NSInteger waitingListSource;
- (id)paidWaitingList;
- (void)setPaidWaitingListSortStrategy:;
- (BOOL)showPaidListTab;
- (id)paidWaitingUser;
- (void)setWaitingList:;
- (void)setWaitingUser:;
- (id)allWaitingList;
- (id)applyWaitingTrackInfo;
- (void)classifyInterativeList:type:;
- (void)didSetAttachingDIContext;
- (BOOL)enableApplyListLoadMore;
- (BOOL)enablePaidWaitingListLoadMore;
- (void)fetchWaitingListWithType:completion:;
- (id)getWaitingUserInfoRequestThrottler;
- (BOOL)hasFetchWaitingList;
- (BOOL)hasLinkPaidGuidence;
- (id)initWithRoom:trackContext:;
- (BOOL)isLoadMoreList;
- (id)linkmicAPI;
- (void)loadMoreWaitingListWithType:completion:;
- (void)loadWaitingListWithType:completion:;
- (id)offlineQueryWaitingInfoOfUser:;
- (id)p_mergeList:withList:frontFilterBack:;
- (id)paidWaitingListNextCursor;
- (int)paidWaitingListSortStrategy;
- (long long)paidWaitingListTotalCount;
- (void)realTimeQueryWaitingInfoOfUser:completion:;
- (void)realTimeQueryWaitingInfoOfUsers:completion:;
- (void)refreshWaitingListWithType:completion:;
- (void)removeWaitingModelWithUid:;
- (void)removeWaitingUsersWithActiveUsers:;
- (id)requestTimeMap;
- (id)roomModel;
- (BOOL)selectedPaidListTab;
- (void)setAllWaitingList:;
- (void)setApplyWaitingTrackInfo:;
- (void)setEnableApplyListLoadMore:;
- (void)setEnablePaidWaitingListLoadMore:;
- (void)setGetWaitingUserInfoRequestThrottler:;
- (void)setHasFetchWaitingList:;
- (void)setHasLinkPaidGuidence:;
- (void)setIsLoadMoreList:;
- (void)setLinkmicAPI:;
- (void)setPaidWaitingList:;
- (void)setPaidWaitingListNextCursor:;
- (void)setPaidWaitingListTotalCount:;
- (void)setPaidWaitingUser:;
- (void)setRequestTimeMap:;
- (void)setRoomModel:;
- (void)setSelectedPaidListTab:;
- (void)setServerTime:;
- (void)setShowPaidListTab:;
- (void)setTrackContext:;
- (void)setUserListStatus:;
- (void)setUserListType:;
- (void)setWaitingListNextCursor:;
- (void)setWaitingListSortStrategy:;
- (void)setWaitingListSource:;
- (void)setWaitingListTotalCount:;
- (void)setWaitingOffsetInfo:;
- (id)trackContext;
- (void)updateWaitingOffsetInfo:;
- (int)userListStatus;
- (unsigned long long)userListType;
- (id)waitingList;
- (id)waitingListNextCursor;
- (int)waitingListSortStrategy;
- (int)waitingListSource;
- (long long)waitingListTotalCount;
- (id)waitingOffsetInfo;
- (id)waitingUser;
- (long long)totalCount;
- (id)displayText;
- (void).cxx_destruct;
- (id)serverTime;
- (void)setDisplayText:;
- (void)setTotalCount:;
@end
