@interface ECLabelChangeMessageAction : ECLocalMessageAction
@property (nonatomic) NSSet remoteIDs;
@property (nonatomic) NSArray messages;
@property (nonatomic) NSSet labelsToAdd;
@property (nonatomic) NSSet labelsToRemove;
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
- (void)setRemoteIDs:;
- (id)labelsToAdd;
- (void)setLabelsToAdd:;
- (id)labelsToRemove;
- (void)setLabelsToRemove:;
@end
