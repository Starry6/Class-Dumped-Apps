@interface IESECListKitBundleConfigCache : NSObject
@property (nonatomic) NSMutableDictionary bundleConfigCache;
- (id)bundleConfigCache;
- (BOOL)bundleIsValid:;
- (void)preloadBundleWith:;
- (void)setBundleConfigCache:;
- (void).cxx_destruct;
+ (id)shareInstance;
@end
