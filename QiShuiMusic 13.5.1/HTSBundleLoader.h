@interface HTSBundleLoader : NSObject
@property (nonatomic) NSMutableDictionary bundleTracker;
@property (nonatomic) <HTSBundleLoaderDelegate> delegate;
- (id)bundleTracker;
- (BOOL)loadName:;
- (id)pointerForBundleName:symbolName:;
- (void)setBundleTracker:;
- (void)unloadName:;
- (id)initPrivate;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
+ (BOOL)loadName:;
+ (void)unloadName:;
+ (id)sharedLoader;
@end
