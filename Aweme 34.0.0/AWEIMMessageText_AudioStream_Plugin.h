@interface AWEIMMessageText_AudioStream_Plugin : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)multiSelectUpdateIsEditMode:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
