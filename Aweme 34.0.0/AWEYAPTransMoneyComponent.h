@interface AWEYAPTransMoneyComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellWillDisplay:;
- (id)displayMessage;
- (void)setScene:;
- (id)init;
- (long long)scene;
+ (BOOL)canCreateComponentWithContext:;
@end
