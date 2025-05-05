@interface IESLiveChargeViewAgreementComponent : IESLiveBaseChargeAgreementView
@property (nonatomic) IESLiveChargeViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)chargeAgreementViewOnTapped;
- (void)didAgreementStatusChanged;
- (void)updateViewModel:;
- (id)viewModel;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (double)viewHeight;
@end
