@interface EMMessageTransferAction : EMMessageChangeAction
@property (nonatomic) NSURL destinationMailboxURL;
@property (nonatomic) q specialDestinationMailboxType;
@property (nonatomic) ECMessageFlagChange flagChange;
@property (nonatomic) BOOL copyMessages;
- (long long)signpostType;
- (BOOL)copyMessages;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)flagChange;
- (id)destinationMailboxURL;
- (id)initWithMessageListItems:specialDestinationMailboxType:flagChange:copyMessages:;
- (id)initWithMessageListItems:destinationMailbox:copyMessages:;
- (long long)specialDestinationMailboxType;
+ (BOOL)supportsSecureCoding;
@end
