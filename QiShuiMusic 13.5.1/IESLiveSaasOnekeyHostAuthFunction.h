@interface IESLiveSaasOnekeyHostAuthFunction : NSObject
@property (nonatomic) BOOL userDidAgreePhoneNumberUsageForDouyin;
@property (nonatomic) IESLiveSaaSAuthAlertViewModel viewModel;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)authFinishToRequestAccessToken:;
- (void)trackWithModel:;
- (void)bindDouyinAccountByPhoneNumber:;
- (void)bindDouyinAccountByPhone:;
- (void)checkPhoneNumberUsedInDouyin:;
- (void)createDouyinAccountByPhoneNumber:;
- (void)doDouyinAuth:;
- (void)doHostLoginAndAuth:;
- (void)doPhoneNumberAuth:;
- (void)finishAuth:;
- (id)getCurrentAccountPhoneNumber;
- (void)getHostAccountPhoneNumber:;
- (void)getLocalPhoneNumber:;
- (void)hostLogin:;
- (BOOL)isBindAweme;
- (BOOL)isCurrentAccountWithDouyinAuth;
- (BOOL)isCurrentAccountWithLegalPhoneNumber;
- (BOOL)isHostLogin;
- (BOOL)isLocalPhoneNumberLegal;
- (BOOL)isUserAgreePhoneNumberUsageForDouyin;
- (void)requestAuth:;
- (void)resolveBindConflict:;
- (void)setUserDidAgreePhoneNumberUsageForDouyin:;
- (void)showDouyinAccountAccessDialog:selectionBlock:;
- (void)showDouyinAccountAccessDialogV1:selectionBlock:;
- (void)showDouyinAccountAccessDialogV2:selectionBlock:;
- (void)showDouyinAuthDialog:selectionBlock:;
- (void)showPhoneNumberAuthDialog:service:selectionBlock:;
- (BOOL)userDidAgreePhoneNumberUsageForDouyin;
- (id)viewModel;
- (void).cxx_destruct;
- (void)setViewModel:;
@end
