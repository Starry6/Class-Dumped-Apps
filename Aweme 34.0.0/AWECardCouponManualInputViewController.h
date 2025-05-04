@interface AWECardCouponManualInputViewController : UIViewController
@property (nonatomic) UILabel infoLabel;
@property (nonatomic) AWEFormattedTextField textField;
@property (nonatomic) AWEButton confirmButton;
@property (nonatomic) BOOL isGrouponCoupon;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)configWithRouterParamDict:;
- (void)tapView;
- (BOOL)isGrouponCoupon;
- (void)backButtonDidTap;
- (void)confirmButtonDidTap;
- (void)setIsGrouponCoupon:;
- (void)clearInput;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (id)textField;
- (void)setTextField:;
- (void).cxx_destruct;
- (BOOL)textField:shouldChangeCharactersInRange:replacementString:;
- (id)infoLabel;
- (void)setupUI;
- (id)confirmButton;
- (void)setConfirmButton:;
- (void)setInfoLabel:;
@end
