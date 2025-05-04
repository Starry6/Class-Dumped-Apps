@interface AWESearchAIGCImageGeometryCalculator : NSObject
+ (id)regularRect:superBounds:;
+ (id)calculateAspectFillFrameForImage:inContainerBounds:;
+ (id)calculateAnchorToCenterCoverFrameForSubBounds:toParentBounds:withAnchorPoint:;
+ (id)calculateAspectFitFrameForImage:inContainerBounds:;
@end
