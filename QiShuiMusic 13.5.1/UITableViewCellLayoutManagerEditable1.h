@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)textFieldShouldReturn:;
- (BOOL)textFieldShouldBeginEditing:;
- (void)textFieldDidEndEditing:;
- (void)textFieldDidBeginEditing:;
- (id)detailTextLabelForCell:;
- (id)intrinsicContentSizeForCell:rowWidth:;
- (void)layoutSubviewsOfCell:;
- (id)editableTextFieldForCell:;
- (void)_textFieldStartEditing:;
- (void)_textFieldEndEditing:;
- (void)_textFieldEndEditingOnReturn:;
- (void)_textValueChanged:;
- (double)defaultTextFieldFontSizeForCell:;
@end
