@interface AWEECOMIMOrderPayCareCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardOrderPayCard orderCardView;
@property (nonatomic) AWEECOMIMCardRightsView rightsView;
@property (nonatomic) AWEECOMIMCardComponentSingleLabelView descView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)descView;
- (void)setDescView:;
- (id)orderCardView;
- (id)btnPanel;
- (void)setOrderCardView:;
- (void)setBtnPanel:;
- (void)countdownDone:;
- (id)rightsView;
- (void)setRightsView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
