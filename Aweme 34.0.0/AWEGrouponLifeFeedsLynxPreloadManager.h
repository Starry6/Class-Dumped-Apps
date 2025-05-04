@interface AWEGrouponLifeFeedsLynxPreloadManager : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)preloadCaches;
- (id)appendQueryOntoLynxUrl:;
- (id)viewForKey:inScene:;
- (id)generateViewWithLynxUrl:;
- (void)clearCacheForScene:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
