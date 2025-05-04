@interface AWEECOMIMUrgeDeliveryView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentLabelView headerView;
@property (nonatomic) AWEECOMIMCardComponentButtonsView buttonsView;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)setButtonsView:;
- (id)buttonsView;
- (void)updateData;
- (void)_customInit;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
+ (id)cardPaddings;
+ (id)textEdgeInset;
@end
