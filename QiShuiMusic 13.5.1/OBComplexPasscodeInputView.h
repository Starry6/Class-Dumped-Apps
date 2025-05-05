@interface OBComplexPasscodeInputView : OBPasscodeInputView
@property (nonatomic) UITextField passcodeField;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)textFieldShouldReturn:;
- (id)passcode;
- (void)traitCollectionDidChange:;
- (void).cxx_destruct;
- (void)setPasscode:;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (id)passcodeDisplayView;
- (id)passcodeField;
- (void)setPasscodeField:;
- (id)initWithFrame:numericOnly:;
@end
