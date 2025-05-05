@interface EMMoveMailboxChangeAction : EMMailboxChangeAction
@property (nonatomic) EMMailboxObjectID parentMailboxID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)parentMailboxID;
- (id)initWithMailbox:newParent:;
- (id)initWithMailboxObjectID:newParentMailboxID:;
+ (BOOL)supportsSecureCoding;
@end
