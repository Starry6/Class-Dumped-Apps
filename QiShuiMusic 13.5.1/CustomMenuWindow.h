@interface CustomMenuWindow : UIWindow
@property (nonatomic) CustomMenuView menuView;
- (id)initWithFrame:;
- (id)hitTest:withEvent:;
- (id)menuView;
- (void)setMenuView:;
- (void).cxx_destruct;
@end
