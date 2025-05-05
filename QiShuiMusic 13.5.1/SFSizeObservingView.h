@interface SFSizeObservingView : UIView
@property (nonatomic) NSLayoutDimension observedHeightDimension;
@property (nonatomic) @? sizeChangeCallback;
- (void)layoutSubviews;
- (id)hitTest:withEvent:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setObservedHeightDimension:;
- (id)observedHeightDimension;
- (id)sizeChangeCallback;
- (void)setSizeChangeCallback:;
@end
