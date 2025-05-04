@interface AWECarrierLoginPadView : AWECarrierLoginBaseView
@property (nonatomic) AWELoginButton qrcodeLoginBtnPad;
@property (nonatomic) AWELoginButton otherLoginBtnPad;
@property (nonatomic) UIStackView bottomStackViewPad;
- (id)bottomStackViewPad;
- (id)qrcodeLoginBtnPad;
- (id)otherLoginBtnPad;
- (void)setQrcodeLoginBtnPad:;
- (void)setOtherLoginBtnPad:;
- (void)setBottomStackViewPad:;
- (void)didMoveToSuperview;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
@end
