@interface AWEIMGroupChainsTailComponent : AWEIMFlexComponentSwiftAdapter
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
