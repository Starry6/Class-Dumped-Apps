@interface IMReplyContextAttachmentMessagePartChatItem : IMAttachmentMessagePartChatItem
@property (nonatomic) IMItem _parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (nonatomic) NSString replyMessageGUID;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)_parentItem;
- (id)replyMessageGUID;
- (BOOL)replyIsFromMe;
- (BOOL)isReplyContextPreview;
- (void)set_parentItem:;
- (void)setReplyIsFromMe:;
- (void)setReplyMessageGUID:;
- (id)_initWithItem:parentItem:replyMessageGUID:replyIsFromMe:text:index:messagePartRange:transferGUID:chatContext:;
- (id)_initWithItem:parentItem:replyMessageGUID:replyIsFromMe:text:index:messagePartRange:transferGUID:chatContext:visibleAssociatedMessageChatItems:;
@end
