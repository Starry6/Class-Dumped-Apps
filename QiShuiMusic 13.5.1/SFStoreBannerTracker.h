@interface SFStoreBannerTracker : NSObject
- (id)filePath;
- (void)load;
- (id)init;
- (void)save;
- (void)clear;
- (void).cxx_destruct;
- (void)isProductBannerBlocked:completion:;
- (void)blockProductBanner:;
+ (id)sharedTracker;
@end
