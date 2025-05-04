@interface AWERLInsetsVirtualNode : AWERLVirtualNode
@property (nonatomic) {UIEdgeInsets=dddd} insets;
@property (nonatomic) NSObject<AWERLVirtualNodeProtocol> node;
- (id)createLayoutNode;
- (id)initWithNode:insets:props:;
- (id)insets;
- (id)node;
- (void).cxx_destruct;
- (void)setInsets:;
- (id)childAtIndex:;
- (void)setNode:;
- (unsigned long long)numberOfChildren;
@end
