@interface STComment.BNCommentInputView : UIView
@property (nonatomic) {CGSize=dd} intrinsicContentSize;
- (BOOL)pointInside:withEvent:;
- (BOOL)textView:shouldInteractWithTextAttachment:inRange:interaction:;
- (void)textViewDidBeginEditing:;
- (void)textViewDidEndEditing:;
- (void)textViewDidChange:;
- (BOOL)textView:shouldChangeTextInRange:replacementText:;
- (void)onEmojiButton;
- (void)onSendButton;
- (void)dealloc;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
@end
