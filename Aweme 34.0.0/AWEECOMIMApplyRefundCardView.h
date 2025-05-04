@interface AWEECOMIMApplyRefundCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardOrderCard orderCardView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:;
- (void)setBtnPanel:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
@end
