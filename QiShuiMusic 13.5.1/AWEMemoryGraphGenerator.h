@interface AWEMemoryGraphGenerator : NSObject
+ (BOOL)checkIfHasGraphUnderPath:;
+ (void)generateMemoryGraphWithRequest:error:degrade:;
+ (id)lockPath:;
+ (id)p_graphMainPathWithBasePath:;
+ (id)p_graphMetaPathWithBasePath:;
+ (id)p_graphStrPathWithBasePath:;
@end
