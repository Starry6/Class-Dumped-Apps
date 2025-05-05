@interface CPRotatedRegion : CPRegion
- (double)center;
- (id)anchor;
- (id)init;
- (double)top;
- (double)left;
- (double)bottom;
- (double)right;
- (void)fitBoundsToChildren;
- (void)resizeWith:;
- (id)normalizedBounds;
@end
