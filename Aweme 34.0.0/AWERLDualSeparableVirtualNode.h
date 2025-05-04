@interface AWERLDualSeparableVirtualNode : AWERLVirtualNode
@property (nonatomic) NSObject<AWERLVirtualNodeProtocol> prefixVNode;
@property (nonatomic) NSObject<AWERLVirtualNodeProtocol> suffixVNode;
@property (nonatomic) NSObject<AWERLVirtualNodeProtocol> separatorVNode;
@property (nonatomic) NSArray children;
@property (nonatomic) BOOL forceInNewLine;
- (id)createLayoutNode;
- (BOOL)forceInNewLine;
- (void)setForceInNewLine:;
- (id)separatorVNode;
- (void)updatePrefixVNode:suffixVNode:separatorVNode:;
- (void)setSeparatorVNode:;
- (void)removeSeparatorNode;
- (void)setPrefixVNode:;
- (void)setSuffixVNode:;
- (void)rebuildChildrenArray;
- (id)prefixVNode;
- (id)suffixVNode;
- (id)children;
- (void).cxx_destruct;
- (id)childAtIndex:;
- (void)setChildren:;
- (unsigned long long)numberOfChildren;
@end
