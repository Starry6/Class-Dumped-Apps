@interface CNPickerItemCell : UITableViewCell
@property (nonatomic) UITextField textField;
@property (nonatomic) BOOL placeholder;
- (id)initWithStyle:reuseIdentifier:;
- (BOOL)isPlaceholder;
- (void)layoutSubviews;
- (id)textField;
- (void)setTextField:;
- (void)prepareForReuse;
- (void)setPlaceholder:;
- (void)beginEditing;
- (void)endEditing;
- (void).cxx_destruct;
- (void)setTextFieldHidden:;
@end
