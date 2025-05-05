@interface IESLiveMyLiveTabCell : UITableViewCell
@property (nonatomic) UIView dynamicView;
@property (nonatomic) IESLiveMyLiveTabCellViewModel viewModel;
@property (nonatomic) <IESLiveAnnouncementXApi> appointApi;
@property (nonatomic) <IESLiveDynamicService> dynamicService;
@property (nonatomic) <IESLiveMyLiveTabCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDynamicView:;
- (id)appointApi;
- (id)dynamicService;
- (id)dynamicView;
- (void)setAppointApi:;
- (void)setDynamicService:;
- (void)triggerSliceXEvent:;
- (void)updateCellWithViewModel:;
- (void)updateDataSourceWithData:viewModel:;
- (void)updateFollowStatus:error:withViewModel:;
- (id)initWithStyle:reuseIdentifier:;
- (id)viewModel;
- (void)setDelegate:;
- (void)prepareForReuse;
- (id)delegate;
- (void).cxx_destruct;
- (void)setViewModel:;
@end
