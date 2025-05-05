@interface FAFamilySettings : FAFamilyCircleRequest
@property (nonatomic) UIViewController presentingViewController;
@property (nonatomic) ACAccount iTunesAccount;
@property (nonatomic) BOOL isFirstRun;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentingViewController;
- (void)setPresentingViewController:;
- (id)iTunesAccount;
- (void).cxx_destruct;
- (void)setITunesAccount:;
- (BOOL)isFirstRun;
- (void)launchiCloudFamilySettings;
- (void)familySetupPrompterDidFinish:;
- (BOOL)isAccountSignedIn;
- (void)launchiCloudFamilySettingsWithOptions:;
- (void)_launchPrefsUsingDaemonWithOptions:;
- (void)setIsFirstRun:;
@end
