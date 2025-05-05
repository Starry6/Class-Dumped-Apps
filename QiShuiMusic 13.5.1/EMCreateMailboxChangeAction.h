@interface EMCreateMailboxChangeAction : EMMailboxChangeAction
@property (nonatomic) NSString name;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)name;
- (id)initWithMailboxName:parentMailbox:;
- (id)initWithMailboxName:parentMailboxID:;
+ (BOOL)supportsSecureCoding;
@end
