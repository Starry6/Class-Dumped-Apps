@interface UIMenuController : NSObject
@property (nonatomic) BOOL menuVisible;
@property (nonatomic) q arrowDirection;
@property (nonatomic) NSArray menuItems;
@property (nonatomic) {CGRect={CGPoint=dd}{CGSize=dd}} menuFrame;
- (id)init;
- (long long)arrowDirection;
- (BOOL)isMenuVisible;
- (void)setMenuItems:;
- (void)hideMenu;
- (void)showMenuFromView:rect:;
- (void)update;
- (void)setMenuVisible:animated:;
- (void)setTargetRect:inView:;
- (id)menuItems;
- (void)hideMenuFromView:;
- (void)setArrowDirection:;
- (id)menuFrame;
- (void)setMenuVisible:;
- (id)_asCalloutBarDelegate;
+ (id)sharedMenuController;
@end
