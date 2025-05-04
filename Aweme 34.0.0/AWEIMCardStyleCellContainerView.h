@interface AWEIMCardStyleCellContainerView : UIView
@property (nonatomic) double layerCornerRadius;
@property (nonatomic) Q cornerType;
- (id)init;
- (void)layoutSubviews;
- (unsigned long long)cornerType;
- (void)setCornerType:;
- (double)layerCornerRadius;
- (void)setLayerCornerRadius:;
@end
