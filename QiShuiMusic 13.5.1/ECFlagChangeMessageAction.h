@interface ECFlagChangeMessageAction : ECLocalMessageAction
@property (nonatomic) NSSet remoteIDs;
@property (nonatomic) NSArray messages;
@property (nonatomic) ECMessageFlagChange flagChange;
@property (nonatomic) NSString messageActionPersistentID;
@property (nonatomic) NSURL mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)messages;
- (id)initWithBuilder:;
- (void).cxx_destruct;
- (void)setMessages:;
- (id)remoteIDs;
- (id)flagChange;
- (void)setFlagChange:;
- (void)setRemoteIDs:;
@end
