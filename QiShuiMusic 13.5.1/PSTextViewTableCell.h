@interface PSTextViewTableCell : PSTableCell
@property (nonatomic) PSTextView textView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)textView;
- (void)layoutSubviews;
- (id)initWithStyle:reuseIdentifier:specifier:;
- (BOOL)becomeFirstResponder;
- (void)setValue:;
- (void)setTextView:;
- (BOOL)canBecomeFirstResponder;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (void)textContentViewDidEndEditing:;
- (void)textContentViewDidChange:;
- (void)cellRemovedFromView;
- (void)_adjustTextView:updateTable:withSpecifier:;
- (void)drawTitleInRect:selected:;
@end
