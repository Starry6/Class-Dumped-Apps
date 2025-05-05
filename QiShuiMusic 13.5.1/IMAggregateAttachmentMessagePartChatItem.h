@interface IMAggregateAttachmentMessagePartChatItem : IMAttachmentMessagePartChatItem
@property (nonatomic) NSArray aggregateAttachmentParts;
@property (nonatomic) NSArray transferGUIDs;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (id)aggregateAttachmentParts;
- (id)transferGUIDs;
- (BOOL)isAttachmentContiguousWithChatItem:;
- (id)replyContextPreviewChatItemForReply:chatContext:;
- (id)_initWithItem:text:index:messagePartRange:transferGUIDs:chatContext:;
- (id)_initWithItem:text:index:messagePartRange:transferGUIDs:chatContext:visibleAssociatedMessageChatItems:;
- (void)setAggregateAttachmentParts:;
@end
