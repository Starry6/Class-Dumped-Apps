@interface AWEIMQuoteReplyMessageViewModel : AWEIMMessageViewModel
- (void)fetchCommentStatus;
+ (void)fetchCommentStatusOfMessage:commentID:conversationID:;
@end
