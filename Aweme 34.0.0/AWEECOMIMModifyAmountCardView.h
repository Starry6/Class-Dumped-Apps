@interface AWEECOMIMModifyAmountCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardOrderCard orderCardView;
@property (nonatomic) AWEECOMIMModifyAmountView modifyAmountView;
@property (nonatomic) AWEECOMIMCardComponentSingleLabelView descView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)descView;
- (void)setDescView:;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:;
- (void)setBtnPanel:;
- (id)modifyAmountView;
- (void)setModifyAmountView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
