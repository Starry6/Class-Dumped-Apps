@interface AWEStudioMemoriesAssetsHelper : NSObject
@property (nonatomic) NSMutableSet loadingSet;
- (id)loadingSet;
- (void)setLoadingSet:;
- (void)preloadRemoteVideoIfNeeded:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedHelper;
@end
