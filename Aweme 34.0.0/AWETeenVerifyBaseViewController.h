@interface AWETeenVerifyBaseViewController : UIViewController
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) UIImageView backgroundView;
- (void)backBtnClicked:;
- (void)p_setupNavigationBar;
- (void)transferToHelpPage;
- (id)formattedPhoneString:;
- (void)viewDidLoad;
- (void)setBackgroundView:;
- (id)phoneNumber;
- (id)backgroundView;
- (void)setPhoneNumber:;
- (void).cxx_destruct;
- (id)initWithPhoneNumber:;
@end
