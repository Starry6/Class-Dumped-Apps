@interface AWERVPaymentMaskController : AWEVideoPlayControlBaseController
@property (nonatomic) UIView paymentMaskView;
- (void)setHide:;
- (id)paymentMaskView;
- (void)bindEvents;
- (void)addPaymentMaskViewIfNeeded;
- (void)setPaymentMaskView:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
