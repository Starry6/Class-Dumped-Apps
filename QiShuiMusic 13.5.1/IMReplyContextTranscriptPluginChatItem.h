@interface IMReplyContextTranscriptPluginChatItem : IMTranscriptPluginChatItem
@property (nonatomic) IMItem _parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (nonatomic) NSString replyMessageGUID;
@property (nonatomic) IMMessageItem messageItem;
- (void).cxx_destruct;
- (BOOL)canDelete;
- (id)_parentItem;
- (id)messageItem;
- (id)replyMessageGUID;
- (BOOL)replyIsFromMe;
- (BOOL)isReplyContextPreview;
- (void)set_parentItem:;
- (void)setReplyIsFromMe:;
- (void)setReplyMessageGUID:;
- (id)_initWithItem:parentItem:replyMessageGUID:replyIsFromMe:initialPayload:index:messagePartRange:parentChatHasKnownParticipants:chatContext:;
@end
