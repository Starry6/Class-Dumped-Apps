@interface AWEPrivacyAlertServiceImpl : HTSService
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)canShow;
- (BOOL)needDelayDid;
- (void)popUpPrivacyAlert:;
- (void)advancePopUpPrivacyAlert:;
- (void)popUpPrivacyAlertNotUseAlertManagerWithCompletion:;
- (void)popUpPrivacyAlertNotUseAlertManager;
- (BOOL)hasAgreed;
- (BOOL)isShowingPrivacyAndUserItemAlert;
- (BOOL)hasDismissedPrivacyAlert;
- (void)showPrivacyAlert:;
- (void)securityMSSDKInit;
- (void)showQuitBasicModeAlert;
- (void)showQuitBasicModeAlertWithAgreeBlock:cancelBlock:;
- (void)showQuitAppInBasicModeAlertWithAgreeBlock:cancelBlock:;
- (void)markAlertAgreed;
- (id)aAWEMainModuleAlertInterceptorAdapter;
- (id)aAWEMainModuleCommonAdapter;
- (id)aAWEPrivacyAlertAdapter;
+ (Class)aAWEMainModuleCommonAdapterClass;
+ (Class)aAWEMainModuleAlertInterceptorAdapterClass;
+ (Class)aAWEPrivacyAlertAdapterClass;
@end
