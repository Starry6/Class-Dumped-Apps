@interface FLEXViewShortcuts : FLEXShortcutsSection
@property (nonatomic) UIView view;
- (id)view;
+ (id)viewControllerForView:;
+ (id)viewControllerForAncestralView:;
+ (id)nearestViewControllerForView:;
+ (id)forObject:;
@end
