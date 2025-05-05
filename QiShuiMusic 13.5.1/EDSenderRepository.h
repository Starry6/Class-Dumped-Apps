@interface EDSenderRepository : NSObject
@property (nonatomic) EDSenderPersistence senderPersistence;
@property (nonatomic) <EFScheduler> persistenceScheduler;
- (id)senderPersistence;
- (void).cxx_destruct;
- (void)simpleAddressesForRelevantSendersForSearchWithCompletionHandler:;
- (id)initWithSenderPersistence:;
- (id)persistenceScheduler;
@end
