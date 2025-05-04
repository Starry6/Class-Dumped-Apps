@interface AWEECOMIMOrderRemitCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardMoneyCard moneyCardView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)btnPanel;
- (void)setBtnPanel:;
- (id)moneyCardView;
- (void)setMoneyCardView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
@end
