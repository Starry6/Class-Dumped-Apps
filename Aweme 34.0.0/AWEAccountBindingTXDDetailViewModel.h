@interface AWEAccountBindingTXDDetailViewModel : AWESettingBaseViewModel
@property (nonatomic) AWEAccountManager accountManager;
@property (nonatomic) BOOL isUsingXiguaSDK;
- (id)sectionDataArray;
- (void)setSectionDataArray:;
- (void)tapUnbindToutiaoXiguaDongchedi;
- (void)setIsUsingXiguaSDK:;
- (BOOL)isUsingXiguaSDK;
- (unsigned long long)sdkTypeWillCallFromType:;
- (void)showUnbindTouXiDongAlert:;
- (void)showCannotUnbindTouXiDongAlert;
- (void)enterBindPhoneView;
- (void)requestUnbindTXD:;
- (id)platformNameWithBindType:;
- (void)handleError:platform:;
- (void)monitorThirdPlatformUnBind:error:extraInfo:;
- (unsigned long long)__AWEAccountUtilsContext__;
- (void)refresh;
- (void)viewDidLoad;
- (id)accountManager;
- (void).cxx_destruct;
- (void)setAccountManager:;
@end
