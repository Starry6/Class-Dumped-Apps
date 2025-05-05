@interface IESLiveFastMatchStore : IESLiveWaitingListService
@property (nonatomic) <IESLiveDynamicActivityProvider> activityProvider;
@property (nonatomic) NSMutableArray waitingList;
@property (nonatomic) NSMutableArray paidWaitingList;
@property (nonatomic) q totalCount;
@property (nonatomic) q waitingListTotalCount;
@property (nonatomic) q paidWaitingListTotalCount;
@property (nonatomic) NSInteger waitingListSortStrategy;
@property (nonatomic) IESLiveWaitingListUser waitingUser;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (nonatomic) BOOL showPaidListTab;
@property (nonatomic) BOOL selectedPaidListTab;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (id)activityProvider;
- (void)setActivityProvider:;
@end
