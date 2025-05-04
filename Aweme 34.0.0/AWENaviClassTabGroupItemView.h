@interface AWENaviClassTabGroupItemView : UIView
@property (nonatomic) AWENaviClassTabModel tab;
@property (nonatomic) UIButton button;
- (void)setTab:;
- (id)initWithFrame:classTab:;
- (void)setButton:;
- (BOOL)isSelected;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setSelected:;
- (id)button;
- (void)setupViews;
- (id)tab;
@end
