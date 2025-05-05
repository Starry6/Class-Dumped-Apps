@interface SFWebFormAccessoryViewWrapper : UIView
@property (nonatomic) double bottomBarHeight;
- (void)layoutSubviews;
- (BOOL)pointInside:withEvent:;
- (id)sizeThatFits:;
- (void).cxx_destruct;
- (id)initWithWebFormAccessoryView:bottomBarHeight:;
- (void)setBottomBarHeight:;
- (double)bottomBarHeight;
@end
