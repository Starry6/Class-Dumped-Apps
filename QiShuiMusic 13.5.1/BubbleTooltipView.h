@interface BubbleTooltipView : UIView
@property (nonatomic) NSString text;
- (id)initWithText:;
- (id)initWithFrame:;
- (id)initWithCoder:;
- (void)commonInit;
- (void)layoutSubviews;
- (void)drawRect:;
- (void)showFromView:inSuperview:;
- (void)dismiss;
- (id)text;
- (void)setText:;
- (void).cxx_destruct;
@end
