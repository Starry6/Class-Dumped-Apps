@interface AWEPlayInteractionCoCreatorInviteView : UIView
@property (nonatomic) AWEAwemeModel model;
@property (nonatomic) AWEButton acceptButton;
@property (nonatomic) AWEButton refuseButton;
@property (nonatomic) @? acceptButtonHandler;
@property (nonatomic) @? refuseButtonHandler;
@property (nonatomic) DUXLoadingCircleView loadingView;
- (void)startLoading:;
- (id)refuseButton;
- (void)setRefuseButton:;
- (id)acceptButtonHandler;
- (id)refuseButtonHandler;
- (void)acceptButtonAction;
- (void)refuseButtonAction;
- (void)setAcceptButtonHandler:;
- (void)setRefuseButtonHandler:;
- (void)setModel:;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)loadingView;
- (id)model;
- (void).cxx_destruct;
- (void)stopLoading:;
- (void)configureSubviews;
- (id)acceptButton;
- (void)setAcceptButton:;
- (void)configureConstraints;
@end
