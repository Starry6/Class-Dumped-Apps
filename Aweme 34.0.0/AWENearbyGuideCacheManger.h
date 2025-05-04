@interface AWENearbyGuideCacheManger : NSObject
@property (nonatomic) NSMutableDictionary cacheTabNotShowGuide;
- (void)setCacheTabNotShowGuide:;
- (id)cacheTabNotShowGuide;
- (void)handleRedDot:result:reason:;
- (void)handleShowResultGuideModel:result:reason:;
- (id)init;
- (void)addObserver;
- (void).cxx_destruct;
- (void)applicationWillTerminate;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
