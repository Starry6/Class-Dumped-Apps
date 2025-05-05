@interface IMAggregateMessagePartChatItem : IMTextMessagePartChatItem
@property (nonatomic) NSArray subparts;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)subparts;
- (id)replyContextPreviewChatItemForReply:chatContext:;
- (id)_initWithItem:messagePartRange:subparts:;
@end
