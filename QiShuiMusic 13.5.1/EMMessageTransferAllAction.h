@interface EMMessageTransferAllAction : EMMessageTransferAction
@property (nonatomic) NSArray mailboxObjectIDs;
- (long long)signpostType;
- (id)mailboxObjectIDs;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithMailboxes:messageListItemsToExclude:destinationMailbox:copyMessages:;
- (id)initWithMailboxes:messageListItemsToExclude:specialDestinationMailboxType:flagChange:copyMessages:;
+ (BOOL)supportsSecureCoding;
@end
