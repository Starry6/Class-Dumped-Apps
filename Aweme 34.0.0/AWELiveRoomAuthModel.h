@interface AWELiveRoomAuthModel : AWEBaseApiModel
@property (nonatomic) BOOL userCard;
@property (nonatomic) BOOL chat;
@property (nonatomic) q previewChatExpose;
- (BOOL)userCard;
- (long long)previewChatExpose;
- (void)setUserCard:;
- (void)setPreviewChatExpose:;
- (BOOL)chat;
- (void)setChat:;
@end
