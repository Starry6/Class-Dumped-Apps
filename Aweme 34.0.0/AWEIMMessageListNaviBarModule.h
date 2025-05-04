@interface AWEIMMessageListNaviBarModule : AWEIMMessageListModule
- (void)componentDidMounted:;
- (id)init;
- (void)dealloc;
+ (BOOL)canCreateComponentWithContext:;
@end
