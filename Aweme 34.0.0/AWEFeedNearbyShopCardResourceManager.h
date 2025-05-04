@interface AWEFeedNearbyShopCardResourceManager : NSObject
- (id)backgroundImagePath;
- (id)bgLottiePath;
- (BOOL)preloadShopCardResource;
- (id)locLottiePath;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)loadCDNResourceData:;
+ (void)trackNearbyGeckoResourceMonitorWithResult:loadType:channel:filePath:errorMsg:cdnLoadTime:;
+ (id)mainBGPath;
+ (id)locationIconPathFromBGTheme:;
+ (id)contentBGPathFromBGTheme:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
