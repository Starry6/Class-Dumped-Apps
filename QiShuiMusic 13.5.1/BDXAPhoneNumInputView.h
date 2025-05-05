@interface BDXAPhoneNumInputView : BDXACommonInputView
@property (nonatomic) UILabel areaCodeLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) UIButton areaCodeBtn;
@property (nonatomic) NSString areaCode;
- (void)setAreaCodeBtn:;
- (void)adjustSelectedLocationIfNeeded:range:replacementString:;
- (id)areaCode;
- (id)areaCodeBtn;
- (id)areaCodeLabel;
- (id)formatMobileNumberIfNeeded:;
- (void)loadSubViews;
- (void)selectCountryCode;
- (void)setAreaCode:;
- (void)setAreaCodeLabel:;
- (void)setFont:;
- (void)setInput:;
- (void).cxx_destruct;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (id)arrowView;
- (void)setArrowView:;
- (void)textFieldDidChange:;
@end
