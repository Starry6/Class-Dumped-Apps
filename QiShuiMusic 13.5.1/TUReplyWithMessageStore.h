@interface TUReplyWithMessageStore : NSObject
- (id)init;
- (void)dealloc;
- (int)count;
- (id)_defaultRepliesForSending:;
- (id)defaultReplies;
- (id)customReplies;
- (id)_cannedRepliesForSending:;
- (id)cannedReplies;
- (id)cannedReplyActionSheetOptions;
- (id)cannedRepliesForSending;
- (void)setCustomReply:atIndex:;
- (void)_handleMessagesStoreChanged;
@end
