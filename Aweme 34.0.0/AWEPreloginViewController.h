@interface AWEPreloginViewController : UIViewController
@property (nonatomic) DYPreOneLoginView containerView;
@property (nonatomic) NSString phoneNumber;
@property (nonatomic) q carrierType;
@property (nonatomic) DYPhoneNumberModel phoneNumberModle;
@property (nonatomic) q loginType;
@property (nonatomic) NSArray lastLoginUsers;
@property (nonatomic) DYLastLoginUserModel lastLoginUser;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) AWEPreloginOneLoginDataController loginDataController;
@property (nonatomic) NSDate startLoginDate;
@property (nonatomic) BOOL needRemoveBackgroundColor;
@property (nonatomic) UIButton backButton;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) NSArray platforms;
@property (nonatomic) DYAThemeModel themeModel;
@property (nonatomic) @? backAction;
@property (nonatomic) Q backStrategy;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)awe_shouldAutorotate;
- (unsigned long long)awe_supportedInterfaceOrientations;
- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:;
- (void)setCarrierType:;
- (void)backButtonClicked;
- (long long)carrierType;
- (void)setPlatforms:;
- (id)themeModel;
- (void)setThemeModel:;
- (unsigned long long)backStrategy;
- (void)setBackStrategy:;
- (id)loginTitle;
- (void)trackLoginExitWithIsReturn:;
- (void)setStartLoginDate:;
- (id)startLoginDate;
- (id)p_trackInfo;
- (id)lastLoginUser;
- (id)initWithLastLoginUserModel:loginType:;
- (id)initWithPhoneNumber:carrierType:loginType:;
- (id)initWithPhoneNumber:carrierType:loginType:backStrategy:;
- (id)aAWEUserModuleServiceDOUYINAdapter;
- (void)setLastLoginUser:;
- (void)setLastLoginUsers:;
- (id)lastLoginUsers;
- (id)p_extraInfo;
- (id)__enterFrom;
- (void)setNeedRemoveBackgroundColor:;
- (void)oneLoginWithPhoneNumber;
- (void)trackLoginGuideWithMethod:clin_btn:;
- (void)oneLoginWithUserInfoWithIndex:;
- (void)manualDowngradeLogin;
- (void)addTapGestureRecognizer;
- (void)updatePadButtonUI;
- (void)updateMobileButtonUI;
- (BOOL)needRemoveBackgroundColor;
- (id)loginDataController;
- (void)preocessLoginSuccess;
- (void)processLoginError:;
- (id)phoneNumberModle;
- (void)setPhoneNumberModle:;
- (void)setLoginDataController:;
- (id)backButton;
- (void)viewWillDisappear:;
- (void)viewDidLoad;
- (void)setBackButton:;
- (void)setBackAction:;
- (id)containerView;
- (BOOL)gestureRecognizerShouldBegin:;
- (id)phoneNumber;
- (void)dismiss;
- (void)viewDidDisappear:;
- (void)setContainerView:;
- (void)setPhoneNumber:;
- (void)viewWillAppear:;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)closeAction;
- (id)backAction;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setLoginType:;
- (long long)loginType;
- (id)platforms;
+ (Class)aAWEUserModuleServiceDOUYINAdapterClass;
@end
