@interface CEKWheelScrubberViewCell : UICollectionViewCell
@property (nonatomic) UIView _selectionDotView;
@property (nonatomic) UIView _clippingView;
@property (nonatomic) UIView itemView;
@property (nonatomic) double selectionDotCenterTopSpacing;
@property (nonatomic) q dotPlacement;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)_clippingView;
- (id)itemView;
- (void)setDotPlacement:;
- (void)setSelectionDotCenterTopSpacing:;
- (void)_updateSelectionDot;
- (double)_selectionDotDiameter;
- (double)selectionDotCenterTopSpacing;
- (long long)dotPlacement;
- (id)_selectionDotView;
+ (id)_defaultContentSize;
+ (id)screenScaleContentSize;
+ (id)defaultSize;
+ (double)borderInsetWidth;
@end
