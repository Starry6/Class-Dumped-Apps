@interface UIKeyboardEmojiCategoryBar : UIKeyboardEmojiKeyView
@property (nonatomic) UIView scrubView;
@property (nonatomic) UIKeyboardEmojiGraphicsTraits emojiGraphicsTraits;
@property (nonatomic) UIResponder<UIKBEmojiHitTestResponder> hitTestResponder;
@property (nonatomic) Q selectedIndex;
- (void)dimKeys:;
- (void)dealloc;
- (void)touchesBegan:withEvent:;
- (unsigned long long)selectedIndex;
- (void)prepareForDisplay;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)touchesMoved:withEvent:;
- (void)touchesEnded:withEvent:;
- (void)touchesCancelled:withEvent:;
- (void)setSelectedIndex:;
- (id)initWithFrame:keyplane:key:;
- (id)initWithFrame:keyplane:key:screenTraits:;
- (void)setHitTestResponder:;
- (void)updateToCategory:;
- (void)updateCategoryOnBar:;
- (void)updateCategory;
- (unsigned long long)flippedIndexForIndex:;
- (id)frameForDivider:;
- (void)animateScrubberToRect:;
- (id)categorySelectedCircleRect:;
- (unsigned long long)selectedIndexForTouches:;
- (id)scrubView;
- (void)setScrubView:;
- (id)emojiGraphicsTraits;
- (void)setEmojiGraphicsTraits:;
- (id)hitTestResponder;
+ (BOOL)wantsScreenTraits;
@end
