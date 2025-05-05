@interface UIAccessibilityHUDView : UIView
@property (nonatomic) UIAccessibilityHUDItem item;
- (id)item;
- (id)layoutManager;
- (void)layoutSubviews;
- (void)setItem:;
- (void)dismissAnimated:completion:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)imageView;
- (id)customView;
- (id)titleLabel;
- (id)initWithHUDItem:;
- (id)_contentEffectsForItem:;
- (void)_updateLabelForItem;
- (void)_show:animated:completion:;
- (void)showAnimated:completion:;
- (id)containerViewForLayout;
- (id)itemContainerViewForLayout;
- (id)imageInsetsForLayout;
+ (id)preferredHUDSize;
@end
