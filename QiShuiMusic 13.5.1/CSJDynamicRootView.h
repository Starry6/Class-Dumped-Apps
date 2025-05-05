@interface CSJDynamicRootView : CSJDynamicAbstractView
- (void)_addRelateViewIfNeedFromArray:intoArray:;
- (id)all_recursion_subViews;
- (id)hitTest:withEvent:;
- (void)render;
@end
