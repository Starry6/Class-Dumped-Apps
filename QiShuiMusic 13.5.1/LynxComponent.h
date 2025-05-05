@interface LynxComponent : NSObject
@property (nonatomic) @ parent;
@property (nonatomic) NSMutableArray children;
- (void)animationPropsDidUpdate;
- (void)didAddSubComponent:;
- (void)didMoveToSuperComponet;
- (void)onNodeReady;
- (void)onNodeReload;
- (void)onNodeRemoved;
- (void)propsDidUpdate;
- (void)removeChild:atIndex:;
- (void)transformPropsDidUpdate;
- (void)willMoveToSuperComponent:;
- (void)willRemoveComponent:;
- (void)setParent:;
- (id)init;
- (id)children;
- (void).cxx_destruct;
- (id)parent;
- (void)insertChild:atIndex:;
@end
