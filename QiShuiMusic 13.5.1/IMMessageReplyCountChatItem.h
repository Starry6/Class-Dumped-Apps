@interface IMMessageReplyCountChatItem : IMMessageStatusChatItem
@property (nonatomic) IMItem _parentItem;
@property (nonatomic) BOOL replyIsFromMe;
@property (nonatomic) NSString replyMessageGUID;
- (id)threadIdentifier;
- (void).cxx_destruct;
- (id)_parentItem;
- (id)replyMessageGUID;
- (BOOL)replyIsFromMe;
- (void)set_parentItem:;
- (id)_initWithItem:parentItem:threadIdentifier:replyMessageGUID:replyIsFromMe:count:;
@end
