@interface ECTransferUndownloadedMessageAction : ECLocalMessageAction
@property (nonatomic) q transferType;
@property (nonatomic) NSURL sourceMailboxURL;
@property (nonatomic) NSURL destinationMailboxURL;
@property (nonatomic) NSString oldestPersistedRemoteID;
@property (nonatomic) NSArray itemsToDelete;
@property (nonatomic) NSString messageActionPersistentID;
@property (nonatomic) NSURL mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBuilder:;
- (void).cxx_destruct;
- (id)description;
- (long long)transferType;
- (id)destinationMailboxURL;
- (id)sourceMailboxURL;
- (id)itemsToDelete;
- (void)setDestinationMailboxURL:;
- (id)oldestPersistedRemoteID;
- (void)setOldestPersistedRemoteID:;
- (void)setTransferType:;
- (void)setSourceMailboxURL:;
- (void)setItemsToDelete:;
- (void)updateWithCompletedCopyItems:;
@end
