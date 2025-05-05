@interface OBViewUtilities : NSObject
+ (void)updateNavigationBarWithNavigationItem:forHeaderView:inScrollView:animated:;
+ (BOOL)_navigationBarTitleShouldShowForHeaderView:inScrollView:;
+ (id)pointImageOfColor:;
+ (BOOL)shouldUseAccessibilityLayout;
+ (long long)activeInterfaceOrientationForView:;
@end
