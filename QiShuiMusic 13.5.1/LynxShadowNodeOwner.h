@interface LynxShadowNodeOwner : NSObject
@property (nonatomic) LynxLayoutTick layoutTick;
@property (nonatomic) LynxUIContext uiContext;
@property (nonatomic) ^v layoutNodeManagerPtr;
- (long long)createNodeWithSign:tagName:props:eventSet:lepusEventSet:layoutNodePtr:isParentInlineContainer:;
- (void)destroyNode:;
- (void)destroySelf;
- (void)didLayoutFinished;
- (void)didLayoutStartOnNode:;
- (void)didLayoutStartRecursivelyOnNode:;
- (void)didUpdateLayoutLeft:top:width:height:onNode:;
- (id)initWithUIOwner:componentRegistry:layoutTick:isAsyncLayout:context:;
- (void)insertNode:toParent:atIndex:;
- (id)layoutNodeManagerPtr;
- (id)layoutTick;
- (void)moveNode:inParent:fromIndex:toIndex:;
- (id)nodeWithSign:;
- (void)removeNode:fromParent:atIndex:;
- (float)rootHeight;
- (void)setLayoutNodeManager:;
- (void)setLayoutNodeManagerPtr:;
- (id)uiContext;
- (void)updateNodeWithSign:props:eventSet:lepusEventSet:;
- (void)updateRootSize:height:;
- (id)init;
- (void)setDelegate:;
- (void)destroy;
- (void).cxx_destruct;
- (float)rootWidth;
@end
