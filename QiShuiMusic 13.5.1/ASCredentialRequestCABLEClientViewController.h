@interface ASCredentialRequestCABLEClientViewController : ASCredentialRequestPaneViewController
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_titleText;
- (void)_setUpIconView;
- (void)_useSecurityKeyButtonTapped;
- (id)initWithPresentationContext:loginChoice:;
- (void)_setUpTitleView;
- (void)_setUpQRCodeView;
- (void)_setUpSecurityKeyButtonViewIfNeeded;
- (double)_marginBelowQRCode;
- (double)_marginBelowSecurityKeyButton;
- (double)_marginAboveIcon;
- (void)_addAboveIconSpacerView;
- (void)_addBelowQRCodeSpacerView;
- (id)_qrCodeMessage;
@end
