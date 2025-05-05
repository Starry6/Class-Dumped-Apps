@interface FLEXRuntimeController : NSObject
@property (nonatomic) NSCache bundlePathsCache;
@property (nonatomic) NSCache bundleNamesCache;
@property (nonatomic) NSCache classNamesCache;
@property (nonatomic) NSCache methodsCache;
- (id)init;
- (id)bundlePathsForToken:;
- (id)bundleNamesForToken:;
- (id)classesForKeyPath:;
- (id)methodsForKeyPath:;
- (id)bundlePathsCache;
- (id)bundleNamesCache;
- (id)classNamesCache;
- (id)methodsCache;
- (void).cxx_destruct;
+ (id)shared;
+ (id)dataForKeyPath:;
+ (id)methodsForToken:instance:inClasses:;
+ (id)classesForKeyPath:;
+ (id)shortBundleNameForClass:;
+ (id)imagePathWithShortName:;
+ (id)allBundleNames;
@end
