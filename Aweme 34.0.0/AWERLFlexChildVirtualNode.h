@interface AWERLFlexChildVirtualNode : AWERLVirtualNode
@property (nonatomic) NSObject<AWERLVirtualNodeProtocol> child;
@property (nonatomic) {AWERLFlexChildStyle=Qdddd} style;
- (id)initWithStyle:child:props:;
- (id)createLayoutNode;
- (id)child;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (id)childAtIndex:;
- (unsigned long long)numberOfChildren;
- (void)setChild:;
@end
