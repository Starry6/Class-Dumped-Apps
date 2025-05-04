@interface AWENearbyC2FeedResourceManager : NSObject
- (id)loadCDNResourceData:;
- (void)trackNearbyGeckoResourceMonitorWithResult:loadType:channel:filePath:errorMsg:cdnLoadTime:;
- (id)liveIconPath;
- (BOOL)preloadLiveIconResource;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
