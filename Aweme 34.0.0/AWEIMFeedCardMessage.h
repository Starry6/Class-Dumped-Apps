@interface AWEIMFeedCardMessage : AWEIMCardMessage
- (BOOL)isUserCellType;
- (BOOL)isAllowedEmojiReply;
- (BOOL)isAllowedCellEdit;
- (BOOL)shouldShowNicknameWithMessageType;
- (BOOL)shouldChangeVisibleStatus;
- (id)itemIDUsedForContentAvailableRefresh;
- (BOOL)isAllowedForward;
- (id)authorName;
@end
