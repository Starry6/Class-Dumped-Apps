@interface AWERLAttachState : NSObject
@property (nonatomic) NSMutableSet mountedVirtualNodes;
@property (nonatomic) NSObject<AWERLVirtualNodeProtocol> rootVirtualNode;
- (id)initWithRootVirtualNode:;
- (id)mountedVirtualNodes;
- (void)setMountedVirtualNodes:;
- (id)rootVirtualNode;
- (void)setRootVirtualNode:;
- (void).cxx_destruct;
@end
