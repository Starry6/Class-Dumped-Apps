@interface UISelectionTapRecognizer : UITextTapRecognizer
@property (nonatomic) UIResponder<UITextInput> textView;
- (id)textView;
- (void)setState:;
- (BOOL)isCloseToSelection;
- (void)setTextView:;
@end
