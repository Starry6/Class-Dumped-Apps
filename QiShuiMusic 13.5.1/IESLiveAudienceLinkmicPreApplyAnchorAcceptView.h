@interface IESLiveAudienceLinkmicPreApplyAnchorAcceptView : UIView
@property (nonatomic) IESLiveAudienceLinkmicPreApplyAnchorAcceptViewModel viewModel;
@property (nonatomic) <IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDelegate> delegate;
@property (nonatomic) <IESLiveAudienceLinkmicPreApplyAnchorAcceptViewDataSource> dataSource;
@property (nonatomic) HTSEventContext eventContext;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UITableView audienceApplyTableView;
@property (nonatomic) <IESLiveCompoundSubscription> disposable;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)audienceApplyTableView;
- (id)descLabel;
- (void)didSetAttachingDIContext;
- (id)disposable;
- (id)p_constructWaitingUserFrom:offset:;
- (void)setAudienceApplyTableView:;
- (void)setDescLabel:;
- (void)setDisposable:;
- (void)setEventContext:;
- (void)showUserPreView:trackerLabel:;
- (void)setDataSource:;
- (id)viewModel;
- (id)tableView:cellForRowAtIndexPath:;
- (void)setDelegate:;
- (double)tableView:heightForRowAtIndexPath:;
- (id)dataSource;
- (id)delegate;
- (void)setupObservers;
- (void)tableView:didSelectRowAtIndexPath:;
- (void).cxx_destruct;
- (id)eventContext;
- (void)setViewModel:;
- (void)tableView:willDisplayCell:forRowAtIndexPath:;
- (long long)tableView:numberOfRowsInSection:;
- (void)setupUI;
- (id)initWithFrame:viewModel:;
@end
