@interface CNReputationContactsAdapter : NSObject
@property (nonatomic) CNContactStore contactStore;
@property (nonatomic) <CNSchedulerProvider> schedulerProvider;
@property (nonatomic) <CNScheduler> storeScheduler;
- (id)init;
- (id)schedulerProvider;
- (id)contactsForPredicate:keys:;
- (id)initWithContactStore:schedulerProvider:;
- (id)contactsForPhoneNumber:;
- (id)storeScheduler;
- (id)contactsForEmailAddress:;
- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithContactStore:;
@end
