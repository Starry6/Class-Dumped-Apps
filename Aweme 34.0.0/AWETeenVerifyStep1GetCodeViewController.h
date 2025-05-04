@interface AWETeenVerifyStep1GetCodeViewController : AWETeenVerifyBaseViewController
@property (nonatomic) UIView logoBackgroundView;
@property (nonatomic) UIImageView logoView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel phoneNumberLabel;
@property (nonatomic) UILabel unusedPhoneLabel;
@property (nonatomic) AWETeenNextActionButton nextButton;
- (void)confirmBtnClicked:;
- (id)logoBackgroundView;
- (id)unusedPhoneLabel;
- (void)unuseBtnClicked;
- (void)setLogoBackgroundView:;
- (void)setUnusedPhoneLabel:;
- (void)viewDidLoad;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)nextButton;
- (void)setNextButton:;
- (id)phoneNumberLabel;
- (void)setPhoneNumberLabel:;
- (id)logoView;
- (void)setLogoView:;
@end
