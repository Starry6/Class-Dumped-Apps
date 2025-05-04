@interface AWEFeedGlobalPiPUtilManager : NSObject
@property (nonatomic) BOOL shouldBlockPipWhenPlayerPause;
- (BOOL)shouldBlockPipWhenPlayerPause;
- (void)setShouldBlockPipWhenPlayerPause:;
- (void)applicationWillResignActive:;
- (void)applicationDidBecomeActive:;
- (id)init;
- (void)addObserver;
+ (id)shareInstance;
@end
