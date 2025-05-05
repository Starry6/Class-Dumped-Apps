@interface IMReplyContextTextMessagePartChatItem : IMTextMessagePartChatItem
@property (nonatomic) IMItem _parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (nonatomic) NSString replyMessageGUID;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)_parentItem;
- (id)replyMessageGUID;
- (BOOL)replyIsFromMe;
- (BOOL)isReplyContextPreview;
- (id)_initWithItem:parentItem:replyMessageGUID:replyIsFromMe:text:index:messagePartRange:subject:;
- (id)_initWithItem:parentItem:replyMessageGUID:replyIsFromMe:text:index:messagePartRange:subject:shouldDisplayLink:;
- (void)set_parentItem:;
- (void)setReplyIsFromMe:;
- (void)setReplyMessageGUID:;
@end
