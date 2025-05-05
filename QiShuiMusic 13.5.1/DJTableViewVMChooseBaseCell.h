@interface DJTableViewVMChooseBaseCell : DJTableViewVMCell
@property (nonatomic) DJTableViewVMRow rowVM;
@property (nonatomic) UITextField textField;
@property (nonatomic) UILabel placeholderLabel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cellDidLoad;
- (void)cellWillAppear;
- (void)setSelected:animated:;
- (BOOL)textFieldShouldBeginEditing:;
- (id)textField;
- (void)setTextField:;
- (BOOL)becomeFirstResponder;
- (BOOL)textFieldShouldEndEditing:;
- (void)updateWithValue:;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (id)placeholderLabel;
- (void)setPlaceholderLabel:;
@end
