@interface CNUIToolbar : UIView
@property (nonatomic) NSArray buttons;
@property (nonatomic) UIView border;
@property (nonatomic) UIVisualEffectView visualEffectView;
@property (nonatomic) BOOL isAnimating;
@property (nonatomic) NSArray items;
- (id)initWithItems:;
- (BOOL)isAnimating;
- (id)border;
- (void)layoutSubviews;
- (id)items;
- (id)buttons;
- (double)borderWidth;
- (void).cxx_destruct;
- (void)setVisualEffectView:;
- (void)setButtons:;
- (void)setBorder:;
- (id)visualEffectView;
- (void)setIsAnimating:;
- (void)buttonPressed:;
- (void)setupView;
- (id)buttonForItem:;
- (void)setupBorder;
- (BOOL)isEnabledForItem:;
- (void)setEnabled:forItem:;
+ (double)defaultToolBarHeight;
@end
