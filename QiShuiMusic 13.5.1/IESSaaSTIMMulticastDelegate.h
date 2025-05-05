@interface IESSaaSTIMMulticastDelegate : NSObject
@property (nonatomic) NSMutableDictionary allNodes;
@property (nonatomic) NSLock allNodesLock;
@property (nonatomic) IESSaaSTIMMulticastDelegateTarget target;
- (id)addSyncCallbackWeakDelegate:priority:;
- (id)addWeakDelegate:onQueue:;
- (id)addWeakDelegate:onQueue:priority:;
- (id)allNodesLock;
- (void)removeDelegateWithIdentifier:;
- (void)setAllNodes:;
- (void)setAllNodesLock:;
- (BOOL)respondsToSelector:;
- (id)init;
- (id)allNodes;
- (void)setTarget:;
- (void).cxx_destruct;
- (id)target;
- (id)forwardingTargetForSelector:;
- (id)mediator;
@end
