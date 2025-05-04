@interface AWERLGridVirtualLayoutNode : AWERLLayoutNode
@property (nonatomic) {AWERLGridStyle={CGSize=dd}{UIEdgeInsets=dddd}dd} style;
- (id)computeLayoutThatFits:;
- (id)initWithSize:style:virtualNode:;
- (id)style;
- (void)setStyle:;
@end
