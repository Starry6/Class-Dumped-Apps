@interface AWEPlayInteractionEntertainmentVideoHavePermissionElement : AWEPlayInteractionLeftElement
@property (nonatomic) AWEEntertainmentVideoHavePermissionTagView havePermissionTagView;
@property (nonatomic) <AWEEntertainmentHavePermissionPresenterProtocol> presenter;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)initializeElement;
- (void)viewController_willDisplay;
- (id)activateInfoWithData:;
- (void)layoutElementView;
- (id)createPresenter;
- (void)setHavePermissionTagView:;
- (id)havePermissionTagView;
- (void)viewDidLoad;
- (id)presenter;
- (void)setPresenter:;
- (void).cxx_destruct;
+ (id)activateInfoWithContext:;
@end
