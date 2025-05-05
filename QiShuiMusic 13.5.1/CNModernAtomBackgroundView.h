@interface CNModernAtomBackgroundView : UIView
@property (nonatomic) UIView selectedView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) CNAtomView hostAtomView;
@property (nonatomic) NSInteger separatorStyle;
@property (nonatomic) double scalingFactor;
- (void)layoutSubviews;
- (id)separatorView;
- (BOOL)isSelected;
- (void)tintColorDidChange;
- (void)invalidateIntrinsicContentSize;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (int)separatorStyle;
- (void)setSeparatorStyle:;
- (double)scalingFactor;
- (double)separatorWidth;
- (void)_setSelectionStyle:;
- (id)_chevronImage;
- (void)setScalingFactor:;
- (id)selectedView;
- (id)_backgroundBleedArea;
- (id)hostAtomView;
- (void)setHostAtomView:;
- (BOOL)appearsSelected;
- (void)displaySelectionChangeWithAnimation:;
- (id)wrappedTintColor;
- (void)setSelected:animated:style:updateVisualSelection:;
@end
