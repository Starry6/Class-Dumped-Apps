@interface AWEIMMessageAIReadComponent : AWEIMFlexComponent
- (void)needUpdateDisplayWithContextOptions:;
- (void)multiSelectUpdateIsEditMode:;
- (void)tryPlayMessageAudioStream;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (id)init;
+ (BOOL)canCreateComponentWithContext:;
@end
