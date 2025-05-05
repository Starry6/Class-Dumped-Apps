@interface GVVerticalRank : GVRank
- (double)height;
- (double)width;
- (id)initWithSeparation:;
- (id)sizeForDummy;
- (void)centerNodesWithRespectoTo:;
- (void)centerNode:at:;
@end
