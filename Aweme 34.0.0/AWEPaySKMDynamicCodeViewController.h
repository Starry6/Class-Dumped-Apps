@interface AWEPaySKMDynamicCodeViewController : CJPayBaseViewController
@property (nonatomic) UIImageView topBgImageView;
@property (nonatomic) AWEPaySKMPayeeInfoModel payeeInfo;
@property (nonatomic) NSString amountStr;
@property (nonatomic) NSString codeUrl;
@property (nonatomic) NSString codeToken;
@property (nonatomic) UIView containerView;
@property (nonatomic) UIView topContainer;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) AWEPaySKMCodeImageView codeImageView;
@property (nonatomic) AWEPayAmountLabel amountLabel;
@property (nonatomic) AWEPayIconNameStackView nameView;
@property (nonatomic) UIButton confirmBtn;
@property (nonatomic) UIImageView bottomLogImageView;
@property (nonatomic) UIView errorView;
@property (nonatomic) UILabel errorTipsLabel;
@property (nonatomic) UIButton retryBtn;
@property (nonatomic) AWEPaySKMCreateOrderRequestModel requestModel;
@property (nonatomic) double pageShowTime;
@property (nonatomic) @? submitOrder;
- (BOOL)aweDisableFullscreenPopTransition;
- (id)tipsLabel;
- (id)getTrackCommonParams;
- (id)errorTipsLabel;
- (void)setErrorTipsLabel:;
- (void)setTipsLabel:;
- (id)confirmBtn;
- (void)setConfirmBtn:;
- (void)hideLoading;
- (void)retry:;
- (id)retryBtn;
- (void)setRetryBtn:;
- (id)topContainer;
- (void)setTopContainer:;
- (void)setRequestModel:;
- (void)setupNavigation;
- (void)setAmountStr:;
- (id)codeUrl;
- (void)setCodeUrl:;
- (id)amountStr;
- (id)codeToken;
- (void)setCodeToken:;
- (void)setPayeeInfo:;
- (void)refreshCode:;
- (void)setPageShowTime:;
- (void)reportTrackEvent:params:;
- (id)topBgImageView;
- (void)setCodeImageView:;
- (id)codeImageView;
- (id)bottomLogImageView;
- (void)showErrorView:msg:allowRetry:;
- (id)payeeInfo;
- (double)pageShowTime;
- (id)submitOrder;
- (id)initWithQRCodeUrl:payeeInfo:amountStr:;
- (void)setSubmitOrder:;
- (void)setTopBgImageView:;
- (void)setBottomLogImageView:;
- (void)close;
- (id)nameView;
- (id)requestModel;
- (void)viewDidLoad;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setNameView:;
- (void)setupUI;
- (void)setAmountLabel:;
- (id)amountLabel;
- (id)errorView;
- (void)setErrorView:;
- (void)confirm:;
- (void)showLoading;
@end
