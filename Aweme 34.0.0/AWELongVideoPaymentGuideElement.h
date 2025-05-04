@interface AWELongVideoPaymentGuideElement : AWEBaseElement
@property (nonatomic) UIView container;
@property (nonatomic) AWELongVideoPaymentAnimatingBuyButton buyButton;
@property (nonatomic) BOOL didPay;
@property (nonatomic) BOOL isPaymentType;
@property (nonatomic) BOOL isPayButtonShow;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)viewController_viewDidAppear;
- (id)buyButton;
- (void)setBuyButton:;
- (void)setIsPaymentType:;
- (void)setDidPay:;
- (BOOL)isPaymentType;
- (BOOL)didPay;
- (void)setIsPayButtonShow:;
- (BOOL)isPayButtonShow;
- (void)didClickBuyButton:;
- (void)setContainer:;
- (id)container;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
@end
