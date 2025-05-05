@interface EDDaemonInterfaceFactory : NSObject
@property (nonatomic) EDCategorySubsystem categorySubsystem;
@property (nonatomic) EDPersistence persistence;
- (id)persistence;
- (id)newSenderRepository;
- (id)newActivityRegistry;
- (id)newMailboxRepository;
- (id)sharedDonationController;
- (id)newFetchController;
- (id)sharedInteractionLogger;
- (void)setCategorySubsystem:;
- (id)newSearchableIndex;
- (void).cxx_destruct;
- (id)newVIPManagerInterface;
- (id)newOutgoingMessageRepository;
- (id)initWithPersistence:categorySubsystem:;
- (id)categorySubsystem;
- (id)newMessageRepositoryWithResumable:;
- (id)newAccountRepository;
- (void)test_tearDown;
- (id)newClientResumerWithClientState:;
- (id)newDiagnosticInfoGathererWithServerRemoteClientsProvider:;
@end
