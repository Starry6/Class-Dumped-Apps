@interface AWERLFlexVirtualNode : AWERLVirtualNode
@property (nonatomic) NSMutableArray children;
@property (nonatomic) {AWERLFlexStyle=Qd{UIEdgeInsets=dddd}QQB} style;
- (id)createLayoutNode;
- (id)initWithSize:style:props:children:;
- (void)updateChildren:;
- (id)children;
- (id)style;
- (void).cxx_destruct;
- (void)setStyle:;
- (id)childAtIndex:;
- (void)setChildren:;
- (unsigned long long)numberOfChildren;
@end
