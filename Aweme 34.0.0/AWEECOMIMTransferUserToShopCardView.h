@interface AWEECOMIMTransferUserToShopCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardProductSalesCard productCardView;
@property (nonatomic) AWEECOMIMSubCardOrderCard orderCardView;
@property (nonatomic) AWEECOMIMCardComponentMultiIconLabelView descView;
- (id)descView;
- (void)setDescView:;
- (id)orderCardView;
- (void)setOrderCardView:;
- (id)productCardView;
- (void)setProductCardView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
