@interface AWEECOMIMLogisticsCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardOrderCard orderCardView;
@property (nonatomic) NSMutableArray logisticsViewList;
@property (nonatomic) UIStackView logisticsStackView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:;
- (void)setBtnPanel:;
- (id)logisticsStackView;
- (void)setLogisticsViewCount:;
- (id)logisticsViewList;
- (id)createNewLogisticsView;
- (void)setLogisticsStackView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (id)hitTest:withEvent:;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
