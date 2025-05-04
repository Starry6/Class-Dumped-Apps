@interface AWETeenSetUserInfoStep2PhoneViewController : AWETeenSetUserInfoBaseViewController
@property (nonatomic) AWETeenPhoneNumberInputView phoneNumberInputView;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel noticeLabel;
@property (nonatomic) AWETeenNextActionButton nextButton;
- (id)phoneNumberInputView;
- (void)didClickedConfirm;
- (void)setPhoneNumberInputView:;
- (void)viewDidLoad;
- (id)iconImageView;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)setIconImageView:;
- (id)nextButton;
- (void)setNextButton:;
- (void)setNoticeLabel:;
- (id)noticeLabel;
@end
