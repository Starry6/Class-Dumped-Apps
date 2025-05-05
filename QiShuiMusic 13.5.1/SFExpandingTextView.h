@interface SFExpandingTextView : UITextView
- (id)init;
- (id)intrinsicContentSize;
- (void)setText:;
- (id)initWithMaxHeight:;
@end
