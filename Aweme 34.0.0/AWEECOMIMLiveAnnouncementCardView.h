@interface AWEECOMIMLiveAnnouncementCardView : AWEECOMIMCardBaseView
@property (nonatomic) AWEECOMIMCardComponentCommonTitleView headerView;
@property (nonatomic) AWEECOMIMSubCardLiveAnnouncementCard liveAnnouncementView;
@property (nonatomic) AWEECOMIMCardComponentOperationPanel btnPanel;
- (id)btnPanel;
- (void)setBtnPanel:;
- (void)tapCard;
- (id)liveAnnouncementView;
- (void)setLiveAnnouncementView:;
- (id)initWithFrame:;
- (id)headerView;
- (void).cxx_destruct;
- (void)setHeaderView:;
- (void)updateData;
+ (double)heightWithWidth:model:;
+ (BOOL)isDynamicHeight;
@end
