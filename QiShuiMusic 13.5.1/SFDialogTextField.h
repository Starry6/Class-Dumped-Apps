@interface SFDialogTextField : UITextField
@property (nonatomic) Q stackPosition;
- (void)layoutSubviews;
- (id)initWithFrame:;
- (id)_placeholderColor;
- (id)editingRectForBounds:;
- (id)textRectForBounds:;
- (void)setStackPosition:;
- (unsigned long long)stackPosition;
@end
