@interface AWEPushPreloadManager : NSObject
- (BOOL)enablePushPortReplaceWithExposure:;
- (BOOL)enablePushPreload;
+ (id)sharedInstance;
@end
