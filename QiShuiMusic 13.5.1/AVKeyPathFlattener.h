@interface AVKeyPathFlattener : NSObject
@property (nonatomic) @ dependentProperty;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)addCallbackToCancelDuringDeallocation:;
- (void)dealloc;
- (void)declareKeyPathDependenciesWithRegistry:;
- (id)observedObject;
- (id)initForObservingValueAtKeyPath:onObject:;
- (id)topLevelDependencyProperty;
- (id)dependentProperty;
@end
