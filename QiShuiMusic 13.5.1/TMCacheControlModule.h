@interface TMCacheControlModule : TMModule
- (id)cacheControlConfig;
- (void)setupCacheProcesser;
- (id)transToCahceGroupModels:;
- (void)updateWithConfig:;
- (void)start;
- (void)startRunning;
- (void)setupConfig;
@end
