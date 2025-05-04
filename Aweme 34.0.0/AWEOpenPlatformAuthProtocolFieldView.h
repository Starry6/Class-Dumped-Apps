@interface AWEOpenPlatformAuthProtocolFieldView : UIView
@property (nonatomic) AWEOpenPlatformAuthFlowManager flowManager;
@property (nonatomic) TTTAttributedLabel agreementAndPolicyLabel;
@property (nonatomic) DUXCheckBox protocolCheckBox;
@property (nonatomic) BOOL checked;
@property (nonatomic) @? tapHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)attributedLabel:didSelectLinkWithURL:;
- (void)configAgreement;
- (id)agreementAndPolicyLabel;
- (id)protocolCheckBox;
- (void)protocolCheckBoxTapped;
- (double)protocolHeight;
- (void)setAgreementAndPolicyLabel:;
- (void)setProtocolCheckBox:;
- (void)setChecked:;
- (BOOL)checked;
- (void).cxx_destruct;
- (void)setFlowManager:;
- (void)setupUI;
- (id)flowManager;
- (void)setTapHandler:;
- (id)tapHandler;
- (id)initWithFlowManager:;
@end
