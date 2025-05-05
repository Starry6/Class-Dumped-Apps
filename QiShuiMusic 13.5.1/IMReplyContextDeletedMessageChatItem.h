@interface IMReplyContextDeletedMessageChatItem : IMReplyContextTextMessagePartChatItem
@property (nonatomic) BOOL deletedMessageIsFromMe;
@property (nonatomic) BOOL replyIsFromMe;
@property (nonatomic) NSString replyMessageGUID;
- (BOOL)isFromMe;
- (BOOL)deletedMessageIsFromMe;
- (id)_initWithReplyItem:threadIdentifier:replyMessageGUID:replyIsFromMe:deletedMessageIsFromMe:;
- (void)setDeletedMessageIsFromMe:;
@end
