@interface AWEMemoryGraphGenerator : NSObject
+ (void)generateMemoryGraphWithRequest:error:degrade:;
+ (BOOL)checkIfHasGraphUnderPath:;
+ (id)bundleHelperCopyAppBundleName;
+ (id)lockPath:;
+ (void)dealWithImageInfo:;
+ (id)p_graphMetaPathWithBasePath:;
+ (id)p_graphStrPathWithBasePath:;
+ (id)p_graphMainPathWithBasePath:;
@end
