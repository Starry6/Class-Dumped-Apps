@interface AWEECOMIMGoodsCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMSubCardProductSalesWhiteCard goodsCardView;
@property (nonatomic) AWEECOMIMCardRightsView rightsView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)btnPanel;
- (void)setBtnPanel:;
- (void)tapCard;
- (id)rightsView;
- (void)setRightsView:;
- (id)goodsCardView;
- (void)subCardProductCardDidTapAction;
- (void)setGoodsCardView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
