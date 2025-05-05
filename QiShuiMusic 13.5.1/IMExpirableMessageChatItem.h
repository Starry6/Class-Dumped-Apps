@interface IMExpirableMessageChatItem : IMAttachmentMessagePartChatItem
@property (nonatomic) BOOL isPlayed;
@property (nonatomic) BOOL isSaved;
- (BOOL)isSaved;
- (BOOL)isPlayed;
@end
