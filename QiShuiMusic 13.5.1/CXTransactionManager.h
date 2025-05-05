@interface CXTransactionManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) NSMutableSet outstandingTransactionGroups;
@property (nonatomic) <CXTransactionManagerDelegate> delegate;
- (void)failOutstandingActionsForChannelWithUUID:;
- (id)init;
- (void)failOutstandingActionsForCallWithUUID:;
- (void)setOutstandingTransactionGroups:;
- (void)setDelegate:;
- (id)delegate;
- (void)addOutstandingTransactionGroup:;
- (void).cxx_destruct;
- (void)_setUpTimeoutForActionIfNecessary:callSource:;
- (id)description;
- (id)outstandingTransactionGroups;
- (void)setQueue:;
- (id)initWithQueue:;
- (id)queue;
- (void)_timeoutReachedForAction:callSource:;
- (void)updateWithCompletedAction:;
@end
