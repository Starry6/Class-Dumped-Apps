@interface AWELiveAnchorPermissionManager : NSObject
+ (void)checkLivePermission:;
+ (void)_savePermission:;
+ (BOOL)getLivePermission;
@end
