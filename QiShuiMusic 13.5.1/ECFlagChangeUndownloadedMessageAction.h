@interface ECFlagChangeUndownloadedMessageAction : ECLocalMessageAction
@property (nonatomic) NSString oldestPersistedRemoteID;
@property (nonatomic) ECMessageFlagChange flagChange;
@property (nonatomic) NSString messageActionPersistentID;
@property (nonatomic) NSURL mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithBuilder:;
- (void).cxx_destruct;
- (id)flagChange;
- (void)setFlagChange:;
- (id)oldestPersistedRemoteID;
- (void)setOldestPersistedRemoteID:;
@end
