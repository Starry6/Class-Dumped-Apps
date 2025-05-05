@interface ICSecurityInfo : NSObject
@property (nonatomic) BOOL contentProtectionEnabled;
@property (nonatomic) BOOL deviceUnlocked;
@property (nonatomic) BOOL deviceClassCUnlocked;
- (id)init;
- (void)dealloc;
- (void)_processFirstUnlockNotification;
- (void)_loadContentProtectionEnabled:isDeviceClassCUnlocked:;
- (BOOL)isDeviceClassCUnlocked;
- (void).cxx_destruct;
- (BOOL)isContentProtectionEnabled;
- (BOOL)isDeviceUnlocked;
- (void)performBlockAfterFirstUnlock:;
- (void)_getContentProtectionEnabled:isDeviceClassCUnlocked:;
+ (id)sharedSecurityInfo;
@end
