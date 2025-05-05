@interface ASCSkeletonLabel : UILabel
@property (nonatomic) q effectiveSkeletonAlignment;
@property (nonatomic) BOOL wantsAncestorFocusMarqueeAfterClearingSkeleton;
@property (nonatomic) UIColor skeletonColor;
@property (nonatomic) ASCContentSkeleton skeleton;
- (id)skeleton;
- (void)drawRect:;
- (id)intrinsicContentSize;
- (double)_baselineOffsetFromBottom;
- (id)initWithCoder:;
- (id)initWithFrame:;
- (void)encodeWithCoder:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (double)_firstBaselineOffsetFromTop;
- (long long)effectiveSkeletonAlignment;
- (id)skeletonColor;
- (void)setSkeletonColor:;
- (void)setSkeleton:;
- (id)skeletonRectForBounds:;
- (void)drawSkeletonInRect:;
- (BOOL)wantsAncestorFocusMarqueeAfterClearingSkeleton;
- (void)setWantsAncestorFocusMarqueeAfterClearingSkeleton:;
@end
