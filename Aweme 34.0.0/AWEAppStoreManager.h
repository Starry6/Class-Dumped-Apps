@interface AWEAppStoreManager : NSObject
- (id)aAWEAppStoreManagerCommonAdapter;
+ (BOOL)isAppStoreURL:;
+ (id)appsJumpConfigs;
+ (Class)aAWEAppStoreManagerCommonAdapterClass;
+ (id)__appStoreSchemes;
+ (id)__appStoreHosts;
+ (id)topVCString;
+ (id)sceneStringWithType:;
+ (BOOL)enableHookStoreKit;
+ (BOOL)__isInHouseURL:;
+ (id)hostAndPathForURLString:;
+ (void)trackDisableAppsJumpWithScene:appsJumpDisable:itunesURL:URLScene:appID:extra:;
@end
