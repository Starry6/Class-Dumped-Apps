@interface CNPropertyPostalAddressEditingCell : CNPropertyEditingCell
@property (nonatomic) CNPostalAddressEditorView addressEditor;
@property (nonatomic) UIColor editorSeparatorColor;
- (void)layoutMarginsDidChange;
- (void)setBackgroundColor:;
- (void)setPresentingDelegate:;
- (void).cxx_destruct;
- (void)valueChanged:;
- (id)valueView;
- (id)variableConstraints;
- (void)updateWithPropertyItem:;
- (id)firstResponderItem;
- (double)leftValueMargin;
- (void)layoutChanged:;
- (id)addressEditor;
- (void)setEditorSeparatorColor:;
- (id)editorSeparatorColor;
- (void)setAddressEditor:;
@end
