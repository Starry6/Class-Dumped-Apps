@interface IMUnreadCountChatItem : IMTranscriptChatItem
@property (nonatomic) Q unreadCount;
- (unsigned long long)unreadCount;
- (id)_initWithItem:unreadCount:;
@end
