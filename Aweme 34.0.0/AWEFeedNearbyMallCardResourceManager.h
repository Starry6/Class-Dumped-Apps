@interface AWEFeedNearbyMallCardResourceManager : NSObject
- (id)backgroundImagePath;
- (id)lottiePath;
- (void)preloadMallCardResource;
- (id)lightLottiePath;
- (id)locationLottiePath;
- (id)bgLottiePath;
- (id)styleTwoBgImagePath;
- (id)poiContentBackgroundImagePath;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)loadCDNResourceData:;
+ (id)loadCDNBackgroundImage:;
+ (id)mallPanelPathFromBGTheme:;
+ (id)mallLocationIconPathFromBGTheme:;
+ (void)trackNearbyGeckoResourceMonitorWithResult:loadType:channel:filePath:errorMsg:cdnLoadTime:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
