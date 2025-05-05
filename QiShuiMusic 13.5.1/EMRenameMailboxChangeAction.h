@interface EMRenameMailboxChangeAction : EMMailboxChangeAction
@property (nonatomic) NSString name;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithMailbox:newName:;
- (id)initWithMailboxObjectID:newName:;
+ (BOOL)supportsSecureCoding;
@end
