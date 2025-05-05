@interface CNReputationStore : NSObject
@property (nonatomic) CNReputationCoreRecentsAdapter coreRecentsAdapter;
@property (nonatomic) CNReputationContactsAdapter contactsAdapter;
@property (nonatomic) CNReputationLogger logger;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
- (id)logger;
- (id)init;
- (id)initWithCoreRecentsAdapter:contactsAdapter:logger:schedulerProvider:;
- (id)schedulerProvider;
- (id)contactsAdapter;
- (void).cxx_destruct;
- (id)coreRecentsAdapter;
- (id)makeFutureForHandle:;
- (id)reputationForHandle:timeout:error:;
@end
