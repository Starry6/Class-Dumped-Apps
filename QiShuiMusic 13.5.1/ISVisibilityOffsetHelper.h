@interface ISVisibilityOffsetHelper : NSObject
@property (nonatomic) UIScrollView _scrollView;
@property (nonatomic) {CGPoint=dd} _targetContentOffset;
@property (nonatomic) q direction;
@property (nonatomic) double maximumDistance;
@property (nonatomic) double maximumDistanceLag;
- (long long)direction;
- (void)setDirection:;
- (id)_scrollView;
- (void)_setScrollView:;
- (void)setMaximumDistance:;
- (void).cxx_destruct;
- (id)visibleRectForScrollView:;
- (id)boundsForView:inScrollView:;
- (double)maximumDistance;
- (id)_targetContentOffset;
- (void)getVisibility:offset:targetVisibilityOffset:forView:;
- (void)computeVisibilityOffsetsInScrollView:withTargetContentOffset:usingBlock:;
- (void)_updateDirectionIfNeeded;
- (id)_visibilityRangeForRect:;
- (double)maximumDistanceLag;
- (void)setMaximumDistanceLag:;
- (void)_setTargetContentOffset:;
@end
