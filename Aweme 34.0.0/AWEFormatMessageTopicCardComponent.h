@interface AWEFormatMessageTopicCardComponent : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
