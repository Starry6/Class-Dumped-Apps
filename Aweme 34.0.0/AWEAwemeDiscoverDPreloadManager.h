@interface AWEAwemeDiscoverDPreloadManager : NSObject
@property (nonatomic) AWEDiscoverDVCPreloadContainer preloadContainer;
- (void)preLoadViewController:;
- (void)removeFromPreloadContainer:;
- (id)preloadContainer;
- (void)removeAllPreloadVC;
- (void)setPreloadContainer:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
