@interface AWESideBarDefaultFileUtil : NSObject
- (id)aAWEPadLeftSideBarAdapter;
+ (id)offlineMode;
+ (id)watchHistory;
+ (id)defaultSideBarData;
+ (Class)aAWEPadLeftSideBarAdapterClass;
+ (id)topAreaModule;
+ (id)recentlyAppsModule;
+ (id)recentlyUsersModule;
+ (id)serviceModule;
+ (id)lifeModule;
+ (id)settingPage;
+ (id)scanPage;
+ (id)moduleWithModuleID:ModuleType:moduleTitle:items:;
+ (id)settingPageBusinessType;
+ (id)recentlyApps;
+ (id)recentlyUsers;
+ (id)walletPage;
+ (id)couponPage;
+ (id)openService;
+ (id)watchLater;
+ (id)teenagerProtection;
+ (id)webcastRoomDraw;
+ (id)listenVideoPage;
@end
