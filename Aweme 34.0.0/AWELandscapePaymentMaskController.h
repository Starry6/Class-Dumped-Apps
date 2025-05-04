@interface AWELandscapePaymentMaskController : AWELandscapeInteractionBaseController
@property (nonatomic) AWELandscapePaymentMaskView paymentMaskView;
- (id)paymentMaskView;
- (void)addPaymentMaskViewIfNeeded;
- (BOOL)shouldShowMaskView;
- (void)setPaymentMaskView:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
