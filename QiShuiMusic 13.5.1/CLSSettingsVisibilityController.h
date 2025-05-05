@interface CLSSettingsVisibilityController : NSObject
- (id)init;
- (void)dealloc;
- (id)cachedCurrentUserAppleID;
- (void)unlock;
- (void)lock;
- (void)currentUserDidChange:;
- (BOOL)settingsUIVisible;
- (void).cxx_destruct;
- (id)currentUser;
+ (id)shared;
@end
