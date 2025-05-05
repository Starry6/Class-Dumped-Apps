@interface BDXACarrierOneKeyLoginViewController : BDXALoginViewController
@property (nonatomic) BDXACarrierOneKeyViewController carrierViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)carrierViewController;
- (void)carrierViewController:mainBtnTapperWithCompletion:;
- (BOOL)carrierViewControllerMainBtnTapped:;
- (void)carrierViewControllerOtherBtnTapped:;
- (void)continueLoginConfirmAgreementViewController:type:;
- (void)displayToastWithText:type:;
- (BOOL)extraLoginViewController:shouldIgnoreExtraLogin:;
- (id)loadBottomClickableTextCarrierViewController:;
- (void)setCarrierViewController:;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)loginType;
@end
