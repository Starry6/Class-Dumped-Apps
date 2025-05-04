@interface AWETeenEyeProtectionManager : NSObject
@property (nonatomic) UIView coverView;
@property (nonatomic) BOOL eyeProtectionRemindOn;
@property (nonatomic) BOOL eyeProtectionOn;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)teenModeDidChange:isLogout:;
- (BOOL)eyeProtectionRemindOn;
- (void)setEyeProtectionRemindOn:;
- (BOOL)eyeProtectionOn;
- (void)setEyeProtectionOn:;
- (void)turnOnEyeProtectionModeIfNeeded;
- (void)turnOffEyeProtectionModeIfNeeded;
- (void)toggleEyeProtectionMode;
- (void)toggleEyeProtectionRemindMode;
- (void)turnOnEyeProtectionModeWhenAppStartIfNeeded;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)coverView;
- (void)setCoverView:;
+ (id)sharedInstance;
@end
