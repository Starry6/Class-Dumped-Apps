@interface AWERLInsetsLayoutNode : AWERLLayoutNode
@property (nonatomic) {UIEdgeInsets=dddd} insets;
- (id)computeLayoutThatFits:;
- (id)initWithInsets:virtualNode:props:;
- (id)insets;
- (void)setInsets:;
@end
