@interface AWEU18VerificationManager : NSObject
@property (nonatomic) BOOL inU14VerifyProgress;
@property (nonatomic) @? u14VerifyCompletion;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didSyncCertificationStatus:;
- (void)p_handleEditProfileVerificationSucceed:;
- (void)setInU14VerifyProgress:;
- (void)setU14VerifyCompletion:;
- (BOOL)inU14VerifyProgress;
- (id)u14VerifyCompletion;
- (BOOL)u14ProfileEditVerifyEnabled;
- (void)gotoVerifyIfNeededWithBirthday:fromViewController:completion:;
- (void)resetVerifyProgressAndShowHintIfNeeded;
- (void)showFastEntryAlertWithConfirmBlock:;
- (id)init;
- (void)commonInit;
- (void).cxx_destruct;
+ (id)sharedManager;
@end
