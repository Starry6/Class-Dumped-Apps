@interface AWERecordAuthComponent : NSObject
@property (nonatomic) FPWritableStateFlow stateFlow;
@property (nonatomic) <IESServiceProvider> serviceProvider;
@property (nonatomic) AWEShowAuthLayoutAction layoutAction;
@property (nonatomic) FPWritableStateFlow typeErasedStateFlow;
- (void)didMount;
- (id)typeErasedStateFlow;
- (id)initWith:serviceProvider:;
- (void)loadViewState;
- (void)clickClose;
- (void)trackPermissionStatus;
- (id)stateFlow;
- (void)_showToast:;
- (void)pushAuthorityHelpWebController;
- (void)observeAuthStatusWith:;
- (void)observeLandingModeWith:;
- (void)observeAuthAlbumRemindWith:;
- (void)authGrant;
- (void)grantAlertReject;
- (void)grandAlertConfirm;
- (void)setStateFlow:;
- (void).cxx_destruct;
- (id)serviceProvider;
- (void)setServiceProvider:;
- (id)layoutAction;
- (void)setLayoutAction:;
+ (id)initialUIStateWith:;
+ (Class)stateType;
@end
