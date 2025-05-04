@interface AWEECOMIMAfterSaleProgressCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardOrderCard orderCardView;
@property (nonatomic) AWEECOMIMCardComponentProgressView progressView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:;
- (void)setBtnPanel:;
- (id)progressView;
- (id)initWithFrame:;
- (id)headerView;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
