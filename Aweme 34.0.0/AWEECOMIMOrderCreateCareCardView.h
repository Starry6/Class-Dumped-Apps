@interface AWEECOMIMOrderCreateCareCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardNewProductSalesCard productCardView;
@property (nonatomic) AWEECOMIMCardRightsView rightsView;
@property (nonatomic) AWEECOMIMCardComponentSingleLabelView descView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descView;
- (void)setDescView:;
- (id)btnPanel;
- (void)setBtnPanel:;
- (void)tapCard;
- (id)rightsView;
- (void)setRightsView:;
- (id)productCardView;
- (void)subCardNewProductSalesCardDidTapCard;
- (void)setProductCardView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
