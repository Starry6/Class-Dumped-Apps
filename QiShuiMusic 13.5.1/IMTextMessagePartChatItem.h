@interface IMTextMessagePartChatItem : IMMessagePartChatItem
@property (nonatomic) NSAttributedString subject;
- (id)subject;
- (unsigned char)contentType;
- (BOOL)hasSubject;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:;
- (BOOL)shouldDisplayRichLink;
- (id)_initWithItem:text:index:messagePartRange:subject:;
- (id)messageSummaryInfo;
- (void)setShouldDisplayRichLink:;
- (BOOL)canEditMessageText;
- (id)replyContextPreviewChatItemForReply:chatContext:;
- (id)_initWithItem:text:index:messagePartRange:subject:shouldDisplayLink:;
- (id)_initWithItem:text:index:messagePartRange:subject:visibleAssociatedMessageChatItems:;
@end
