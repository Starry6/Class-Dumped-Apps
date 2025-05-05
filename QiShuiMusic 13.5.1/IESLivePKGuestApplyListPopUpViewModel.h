@interface IESLivePKGuestApplyListPopUpViewModel : IESLivePKGuestWaitingListService
@property (nonatomic) <IESLivePKGuestDynamicActivityProvider> activityProvider;
@property (nonatomic) NSMutableArray waitingList;
@property (nonatomic) NSInteger waitingListSortStrategy;
@property (nonatomic) IESLiveWaitingListUser waitingUser;
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) NSNumber serverTime;
@property (nonatomic) BOOL hasFetchWaitingList;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWaitingList;
- (void).cxx_destruct;
- (id)activityProvider;
- (void)setActivityProvider:;
@end
