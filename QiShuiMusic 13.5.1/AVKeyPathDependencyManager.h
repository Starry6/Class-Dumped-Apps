@interface AVKeyPathDependencyManager : NSObject
- (id)initWithDependencyHost:;
- (void)dealloc;
- (void)valueForKey:dependsOnValueAtKeyPath:;
- (void)dependencyHostIsFullyInitialized;
- (void)cancelAllCallbacks;
- (void)addCallbackToCancel:;
@end
