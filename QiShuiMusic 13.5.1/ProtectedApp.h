@interface ProtectedApp : NSObject
@property (nonatomic) UIWindow lockWindow;
@property (nonatomic) NSMutableString enteredCode;
@property (nonatomic) q failedAttempts;
@property (nonatomic) NSDate lockoutEndTime;
@property (nonatomic) NSDate lastBackgroundTime;
@property (nonatomic) BOOL isLockScreenPresented;
@property (nonatomic) double timeoutInterval;
- (void)handleWillResignActive;
- (void)handleWillEnterForeground;
- (void)presentLockScreenIfNeeded;
- (void)setupLockWindow;
- (void)handleTripleTap;
- (void)showChangePasscodeAlert;
- (void)showChangeTimeoutAlert;
- (BOOL)isCurrentPasscodeValid:;
- (BOOL)areNewPasscodesValid:confirmPasscode:;
- (void)showAlertWithTitle:message:;
- (void)showLockScreen;
- (void)numberButtonTapped:;
- (void)checkPasscode;
- (void)resetPasscode;
- (BOOL)isLockedOut;
- (void)applyLockout;
- (void)showLockoutMessage;
- (void)initializePasscodeFileIfNeeded;
- (id)readPasscodeFromDefaults;
- (void)savePasscodeToDefaults:;
- (void)loadLockoutState;
- (void)saveLockoutState;
- (id)lockWindow;
- (void)setLockWindow:;
- (id)enteredCode;
- (void)setEnteredCode:;
- (long long)failedAttempts;
- (void)setFailedAttempts:;
- (id)lockoutEndTime;
- (void)setLockoutEndTime:;
- (id)lastBackgroundTime;
- (void)setLastBackgroundTime:;
- (BOOL)isLockScreenPresented;
- (void)setIsLockScreenPresented:;
- (double)timeoutInterval;
- (void)setTimeoutInterval:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
