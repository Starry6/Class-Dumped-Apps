@interface EDMailboxAction : NSObject
@property (nonatomic) q actionID;
@property (nonatomic) q actionType;
@property (nonatomic) NSString mailboxName;
@property (nonatomic) NSString renamedMailboxName;
- (long long)actionType;
- (void)setActionType:;
- (id)mailboxName;
- (void).cxx_destruct;
- (void)setRenamedMailboxName:;
- (void)setMailboxName:;
- (id)renamedMailboxName;
- (long long)actionID;
- (void)setActionID:;
@end
