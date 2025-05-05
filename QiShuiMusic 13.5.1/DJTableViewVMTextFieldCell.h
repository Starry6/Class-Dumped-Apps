@interface DJTableViewVMTextFieldCell : DJTableViewVMCell
@property (nonatomic) UITextField textField;
@property (nonatomic) DJTableViewVMTextFieldRow rowVM;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (void)setSelected:animated:;
- (BOOL)textFieldShouldReturn:;
- (BOOL)textFieldShouldBeginEditing:;
- (void)textFieldDidEndEditing:;
- (void)layoutSubviews;
- (id)textField;
- (BOOL)textFieldShouldClear:;
- (void)setTextField:;
- (void)textFieldDidBeginEditing:;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldEndEditing:;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)textFieldDidEndEditing:reason:;
- (void)textFieldDidChange:;
@end
