@interface AWEYAPSplitBillComponent : AWEIMFlexComponent
@property (nonatomic) q scene;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)cellVisibleLifeCycleChanged:;
- (void)cellWillDisplay:;
- (void)viewControllerLifeCycleChanged:;
- (id)displayMessage;
- (void)setScene:;
- (id)init;
- (long long)scene;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
