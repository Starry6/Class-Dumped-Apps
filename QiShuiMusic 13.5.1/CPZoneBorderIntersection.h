@interface CPZoneBorderIntersection : NSObject
- (BOOL)forwardVector;
- (id)copyWithZone:;
- (id)initSuper;
- (long long)comparePositionLengthwise:;
- (void)setIntersectionRect:;
- (id)intersectionRect;
- (void)setIntersectingBorder:;
- (id)intersectingBorder;
- (void)setForwardVector:;
- (void)setBackwardVector:;
- (BOOL)backwardVector;
@end
