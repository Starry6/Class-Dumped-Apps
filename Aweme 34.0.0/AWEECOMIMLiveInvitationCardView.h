@interface AWEECOMIMLiveInvitationCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardLiveInvitationCard liveInvitationView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)btnPanel;
- (void)setBtnPanel:;
- (void)tapCard;
- (id)liveInvitationView;
- (void)setLiveInvitationView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
