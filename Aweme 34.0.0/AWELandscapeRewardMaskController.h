@interface AWELandscapeRewardMaskController : AWELandscapeInteractionBaseController
@property (nonatomic) AWELandscapePaymentMaskView paymentMaskView;
- (id)paymentMaskView;
- (id)trackCommonParams;
- (void)addPaymentMaskViewIfNeeded;
- (BOOL)shouldShowMaskView;
- (void)setPaymentMaskView:;
- (void)updateState:;
- (void)viewDidLoad;
- (void)setData:;
- (void).cxx_destruct;
- (void)reset;
@end
