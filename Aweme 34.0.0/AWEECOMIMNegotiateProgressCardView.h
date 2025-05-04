@interface AWEECOMIMNegotiateProgressCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardOrderCard orderCardView;
@property (nonatomic) AWEECOMIMCardComponentMultiLabelView descView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)descView;
- (void)setDescView:;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:;
- (void)setBtnPanel:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
- (void)_customInit;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
