@interface AWECommentPanelListSwiftImpl.CommentNewTableViewCell : UITableViewCell
@property (nonatomic) NSArray accessibilityElements;
@property (nonatomic) BOOL canBecomeFirstResponder;
- (id)accessibilityElements;
- (void)setAccessibilityElements:;
- (void)handleLongPressWithGes:;
- (void)handleSuggestRequestLongPressWithGes:;
- (void)setHighlighted:animated:;
- (void)prepareForReuse;
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
@end
