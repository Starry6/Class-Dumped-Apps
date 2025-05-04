@interface AWETeenContentPreferManager : NSObject
@property (nonatomic) AWETeenContentManageDataController dataController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (void)setDataController:;
- (void)bdxPushViewController:animated:;
- (void)bdxPresentViewController:animated:completion:;
- (void)p_setup;
- (BOOL)isContentPreferOn;
- (void)updateDataWithStatus:;
- (void)fetchContentManageDataSource;
- (id)getContentManageLynxSurl;
- (void)p_popPasswordConfirmPage;
- (void)nextActionAfterConfirmPassword;
- (id)getAgeScopeText;
- (void)showContentManageConfirmPasswordPage;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)dataController;
+ (id)sharedManager;
@end
