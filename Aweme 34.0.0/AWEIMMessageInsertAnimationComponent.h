@interface AWEIMMessageInsertAnimationComponent : AWEIMFlexComponent
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (void)p_createPresenterIfNeed;
- (void)p_updatePresenterIfNeed;
+ (BOOL)canCreateComponentWithContext:;
@end
