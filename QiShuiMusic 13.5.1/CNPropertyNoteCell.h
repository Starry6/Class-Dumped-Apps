@interface CNPropertyNoteCell : CNPropertyCell
@property (nonatomic) UILabel labelLabel;
@property (nonatomic) UITextView textView;
- (void)setProperty:;
- (id)initWithStyle:reuseIdentifier:;
- (id)textView;
- (void)dealloc;
- (id)labelView;
- (void)setTextView:;
- (void).cxx_destruct;
- (void)setAllowsEditing:;
- (id)valueView;
- (id)labelLabel;
- (BOOL)shouldPerformDefaultAction;
- (void)performDefaultAction;
- (void)setValueTextAttributes:;
- (BOOL)supportsTintColorValue;
- (BOOL)allowsCellSelection;
- (BOOL)displaysCellSelectionState;
- (double)valueViewBottomMargin;
- (void)textViewChanged:;
- (void)textViewEditingDidEnd:;
+ (BOOL)shouldIndentWhileEditing;
@end
