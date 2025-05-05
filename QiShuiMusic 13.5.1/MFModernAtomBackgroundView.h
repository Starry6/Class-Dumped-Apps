@interface MFModernAtomBackgroundView : UIView
@property (nonatomic) UIView selectedView;
@property (nonatomic) UIView separatorView;
@property (nonatomic) MFModernAtomView hostAtomView;
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
- (void)setSelected:animated:style:;
- (id)_backgroundBleedArea;
- (id)hostAtomView;
- (void)setHostAtomView:;
@end
