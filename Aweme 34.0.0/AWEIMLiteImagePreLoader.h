@interface AWEIMLiteImagePreLoader : NSObject
- (void)noitfyPreloadCanStart;
- (void)p_preload;
- (id)p_preloadMethodForBundle;
- (id)p_preloadList;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
