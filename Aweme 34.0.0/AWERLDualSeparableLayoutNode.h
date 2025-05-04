@interface AWERLDualSeparableLayoutNode : AWERLLayoutNode
@property (nonatomic) BOOL markShouldHideSeparator;
- (id)computeLayoutThatFits:;
- (void)setMarkShouldHideSeparator:;
- (BOOL)markShouldHideSeparator;
- (void)applyLayout;
@end
