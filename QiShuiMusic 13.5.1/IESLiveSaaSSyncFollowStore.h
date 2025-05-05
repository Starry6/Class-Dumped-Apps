@interface IESLiveSaaSSyncFollowStore : NSObject
@property (nonatomic) NSMutableArray operationDates;
@property (nonatomic) q maxWeeklyOperations;
@property (nonatomic) BDXBridgeEventSubscriber bridgeEventSubscriber;
- (long long)limitTotalCount;
- (id)bridgeEventSubscriber;
- (BOOL)canPopupSyncFollowView;
- (id)getSyncFollowCountTotalKey;
- (BOOL)isExceedWeeklyLimit;
- (id)lastOperationDate;
- (void)loadOperationDates;
- (long long)maxWeeklyOperations;
- (id)operationDates;
- (void)setBridgeEventSubscriber:;
- (void)setMaxWeeklyOperations:;
- (void)setOperationDates:;
- (void)subscribeEvent;
- (int)syncFollowViewPopupCount;
- (void)unsubscribeEvent;
- (void)updateSyncFollowPopupCount;
- (id)init;
- (void)dealloc;
- (void)performOperation;
- (void).cxx_destruct;
@end
