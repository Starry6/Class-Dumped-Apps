@interface AWECommentPanelListSwiftImpl.CommentNewCell : UICollectionViewCell
@property (nonatomic) NSArray accessibilityElements;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL canBecomeFirstResponder;
- (id)accessibilityElements;
- (void)setAccessibilityElements:;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (void)handleLongPressWithGes:;
- (void)handleSuggestRequestLongPressWithGes:;
- (void)handleSticerLongPressWithGes:stickerImgView:;
- (void)addSticker;
- (void)prepareForReuse;
- (BOOL)isHighlighted;
- (id)initWithFrame:;
- (void)setHighlighted:;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (void)layoutSubviews;
- (id)initWithCoder:;
@end
