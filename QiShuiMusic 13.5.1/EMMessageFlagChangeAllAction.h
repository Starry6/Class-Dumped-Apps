@interface EMMessageFlagChangeAllAction : EMMessageFlagChangeAction
@property (nonatomic) NSArray mailboxObjectIDs;
- (long long)signpostType;
- (id)mailboxObjectIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithMailboxes:messageListItemsToExclude:flagChange:;
+ (BOOL)supportsSecureCoding;
@end
