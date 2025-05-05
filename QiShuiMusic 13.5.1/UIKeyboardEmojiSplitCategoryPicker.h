@interface UIKeyboardEmojiSplitCategoryPicker : UIKeyboardEmojiSplit
@property (nonatomic) BOOL whiteText;
- (void)dealloc;
- (id)tableView:cellForRowAtIndexPath:;
- (BOOL)whiteText;
- (void)setRenderConfig:;
- (void)tableView:didSelectRowAtIndexPath:;
- (void)didMoveToWindow;
- (id)initWithFrame:keyplane:key:;
- (void)updateToCategory:;
- (void)updateCategorySelectedIndicator:;
- (id)titleForRow:fallback:;
- (id)symbolForRow:;
- (void)setWhiteText:;
@end
