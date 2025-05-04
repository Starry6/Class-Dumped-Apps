@interface AWEProfileEditFlowNicknameView : AWEProfileEditFlowStepView
@property (nonatomic) UITextField textField;
@property (nonatomic) UIButton clearButton;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)configWithViewModel:;
- (void)tapNextButton:;
- (void)p_updateUIState;
- (void)p_tapClearButton:;
- (void)p_textFieldEditingChanged:;
- (void)viewWillDisappear:;
- (id)textField;
- (id)initWithFrame:;
- (void)setTextField:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (id)clearButton;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (void)setClearButton:;
@end
