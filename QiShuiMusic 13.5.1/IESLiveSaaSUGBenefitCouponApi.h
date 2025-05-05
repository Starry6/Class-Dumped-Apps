@interface IESLiveSaaSUGBenefitCouponApi : HTSLiveApi
@property (nonatomic) IESLiveSaaSLiveRoomModel roomModel;
@property (nonatomic) IESLiveSaaSUGBenefitCouponViewModel viewModel;
@property (nonatomic) BOOL isCalledByJSB;
- (void)exchangeQcpxUserBenefitPopupWithParams:taskFinished:completion:;
- (void)exchangeUserBenefitPopupWithCompletion:;
- (id)initWithRoom:viewModel:;
- (BOOL)isCalledByJSB;
- (void)queryFullRefundBenifitPopupCompletion:;
- (void)queryQcpxUserBenefitPopupWithParams:completion:;
- (void)queryUserBenefitPopupWithCompletion:;
- (id)roomModel;
- (void)setIsCalledByJSB:;
- (void)setRoomModel:;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
@end
