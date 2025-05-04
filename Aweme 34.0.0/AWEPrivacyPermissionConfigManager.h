@interface AWEPrivacyPermissionConfigManager : NSObject
- (id)iconMap;
- (id)getConfigWithScene:permissionType:;
- (id)getConfigWithScene:permissionType:extraOption:;
- (id)p_getConfigWithScene:permissionKey:;
- (id)defaultConfig;
+ (id)sharedInstance;
@end
