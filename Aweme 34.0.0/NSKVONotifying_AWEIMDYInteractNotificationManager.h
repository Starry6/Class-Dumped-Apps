@interface NSKVONotifying_AWEIMDYInteractNotificationManager : AWEIMDYInteractNotificationManager
- (void)setCurrentNoticeTabbarUnreadCount:;
- (void)setImEmojiReplyCount:;
- (void)setHasNewInteractMessage:;
- (void)setDemotedNoticeTabbarUnreadCount:;
- (void)setCommentForwardAndVoteCount:;
- (void)setNewFansCount:;
- (void)setFlameCount:;
- (void)setCommentAtLikeCount:;
- (Class)class;
- (void)dealloc;
- (BOOL)_isKVOA;
@end
