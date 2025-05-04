@interface AWETransformerAlignItemsBaseLayout : AWETransformerFlexBaseLayout
- (void)adjustChildElementsCrossSizeWithContainerCrossSize:;
- (void)adjustChildElementsCrossAxisOffsetWithContainerCrossSize:;
- (double)calculateContainerElementAdaptiveSize;
- (void)adjustChildElementIfNeededWithContainerCrossSize:;
@end
