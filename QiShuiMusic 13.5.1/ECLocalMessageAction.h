@interface ECLocalMessageAction : NSObject
@property (nonatomic) NSString messageActionPersistentID;
@property (nonatomic) NSURL mailboxURL;
@property (nonatomic) BOOL userInitiated;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setUserInitiated:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)userInitiated;
- (id)mailboxURL;
- (id)messageActionPersistentID;
- (void)setMessageActionPersistentID:;
- (void)setMailboxURL:;
@end
