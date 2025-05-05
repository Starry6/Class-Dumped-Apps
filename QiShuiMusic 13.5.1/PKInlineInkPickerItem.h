@interface PKInlineInkPickerItem : UIView
@property (nonatomic) UIButton button;
@property (nonatomic) double yOffset;
- (id)intrinsicContentSize;
- (void)layoutSubviews;
- (double)yOffset;
- (id)button;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (void)setButton:;
- (void)setYOffset:;
- (id)initWithButton:;
@end
