@interface AKMediaServicesController : NSObject
- (void)appIconForBundleID:size:completion:;
- (id)_artworkURLFromResult:size:updatingIconContext:;
@end
