@interface IMEditedTextMessagePartHistoricalContentChatItem : IMTextMessagePartChatItem
- (BOOL)canDelete;
- (BOOL)canReply;
- (BOOL)canRetract;
- (BOOL)canEditMessageText;
- (BOOL)isEditedMessageHistory;
- (id)_initWithMessageItem:messagePartIndex:historicalContent:editIndex:messagePartRange:subject:;
@end
