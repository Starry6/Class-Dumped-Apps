@interface BDADetailWebPreloadInfoManger : NSObject
- (void)preloadGeckoAccessKey:channels:;
+ (id)sharedManager;
@end
