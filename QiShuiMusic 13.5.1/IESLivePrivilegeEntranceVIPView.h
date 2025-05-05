@interface IESLivePrivilegeEntranceVIPView : UIView
@property (nonatomic) IESLivePrivilegeEntranceVIPViewModel viewModel;
@property (nonatomic) q entranceType;
@property (nonatomic) IESLiveAnimatedImageView vipButton;
@property (nonatomic) <IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)bindState;
- (long long)entranceType;
- (id)schemaURLHandler;
- (void)setEntranceType:;
- (void)setSchemaURLHandler:;
- (void)setVipButton:;
- (void)viewDidHideFromContainer:;
- (void)viewDidShowOnContainer:;
- (id)vipButton;
- (void)vipViewTapped;
- (id)viewModel;
- (id)initWithViewModel:;
- (id)viewSize;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)setupUI;
- (void)addAction;
@end
