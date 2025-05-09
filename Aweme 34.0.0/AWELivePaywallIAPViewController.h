@interface AWELivePaywallIAPViewController : UIViewController
@property (nonatomic) NSDictionary iapBiz;
@property (nonatomic) BOOL isPaying;
@property (nonatomic) @? completion;
@property (nonatomic) UIView contentView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton cancelButton;
@property (nonatomic) UILabel priceLabel;
@property (nonatomic) UILabel descripeLabel;
@property (nonatomic) UIButton payButton;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL isLoadingView;
- (BOOL)isPaying;
- (void)setIsPaying:;
- (id)initWithBiz:completion:isLoadingView:;
- (BOOL)isLoadingView;
- (void)viewDidLoadForLoadingView;
- (void)viewDidLoadForPayView;
- (id)iapBiz;
- (void)setDescripeLabel:;
- (id)descripeLabel;
- (void)payButtonAction;
- (void)setPayButton:;
- (void)finishPayWithIsSuccess:error:orderInfo:;
- (void)setIapBiz:;
- (void)setIsLoadingView:;
- (void)setCancelButton:;
- (id)completion;
- (long long)modalPresentationStyle;
- (void)setLoadingView:;
- (void)viewDidLoad;
- (void)setCompletion:;
- (id)contentView;
- (id)loadingView;
- (void)setTitleLabel:;
- (id)cancelButton;
- (void).cxx_destruct;
- (void)setContentView:;
- (id)titleLabel;
- (void)cancelButtonAction;
- (id)payButton;
- (id)priceLabel;
- (void)setPriceLabel:;
+ (void)showPaywallNativeIAPViewControllerWithBiz:completion:;
+ (void)showPaywallLoadingViewControllerWithBiz:completion:;
@end
