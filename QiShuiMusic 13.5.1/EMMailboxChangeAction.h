@interface EMMailboxChangeAction : NSObject
@property (nonatomic) EMMailboxObjectID mailboxObjectID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithMailbox:;
- (void).cxx_destruct;
- (id)initWithMailboxObjectID:;
- (id)mailboxObjectID;
+ (BOOL)supportsSecureCoding;
@end
