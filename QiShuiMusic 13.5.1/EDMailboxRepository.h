@interface EDMailboxRepository : NSObject
@property (nonatomic) EDMailboxPersistence mailboxPersistence;
@property (nonatomic) NSObject<OS_dispatch_queue> serializationQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMailboxPersistence:;
- (void).cxx_destruct;
- (id)mailboxPersistence;
- (id)serializationQueue;
- (void)getMailboxesWithCompletion:;
- (void)startObservingMailboxChangesWithChangeObserver:observationIdentifier:;
- (void)cancelObservation:;
- (void)refreshMailboxList;
- (void)performMailboxChangeAction:completionHandler:;
- (void)mailboxObjectIDsForMailboxType:completionHandler:;
- (void)mailboxTypeForMailboxObjectID:completionHandler:;
- (id)initWithMailboxPersistence:;
- (BOOL)_performCreateMailboxChangeAction:;
- (BOOL)_performDeleteMailboxChangeAction:;
- (BOOL)_performMoveMailboxChangeAction:;
- (BOOL)_performRenameMailboxChangeAction:;
+ (id)log;
@end
