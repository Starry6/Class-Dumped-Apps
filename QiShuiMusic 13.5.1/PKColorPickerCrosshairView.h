@interface PKColorPickerCrosshairView : UIView
@property (nonatomic) Q cornerPosition;
@property (nonatomic) _PKColorPickerSimpleCrosshairView baseView;
@property (nonatomic) _PKColorPickerCrosshairCornerMaskView baseMaskView;
@property (nonatomic) _PKColorPickerSimpleCrosshairView cornerEdgeView;
@property (nonatomic) _PKColorPickerCrosshairCornerMaskView cornerEdgeMaskView;
@property (nonatomic) <PKColorPickerCrosshairViewDelegate> delegate;
- (void)setCornerPosition:;
- (void)layoutSubviews;
- (void)setDelegate:;
- (id)initWithFrame:;
- (id)baseView;
- (id)delegate;
- (void).cxx_destruct;
- (unsigned long long)cornerPosition;
- (void)update;
- (void)setBaseView:;
- (id)baseMaskView;
- (void)setBaseMaskView:;
- (id)cornerEdgeView;
- (void)setCornerEdgeView:;
- (id)cornerEdgeMaskView;
- (void)setCornerEdgeMaskView:;
@end
