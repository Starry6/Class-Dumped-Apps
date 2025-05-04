@interface AWEVideoEffectViewTimeCell : AWEVideoEffectViewCollectionCell
@property (nonatomic) UIView selectedIndicatorView;
@property (nonatomic) AWEScrollStringLabel titleLabel;
- (id)selectedIndicatorView;
- (void)setSelectedIndicatorView:;
- (id)accessibilityLabel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setSelected:;
- (void)updateText:;
@end
