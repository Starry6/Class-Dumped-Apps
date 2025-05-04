@interface AWENaviClassTabView : UIView
@property (nonatomic) AWENaviClassTabModel tab;
@property (nonatomic) UIButton button;
@property (nonatomic) BOOL selected;
- (void)setTab:;
- (id)initWithFrame:classTab:;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)button;
- (BOOL)isAccessibilityElement;
- (void)setupViews;
- (id)tab;
@end
