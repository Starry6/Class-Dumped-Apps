@interface AWEIMMessageUnreadDotComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)hideUnreadDot;
- (void)p_setupPresenter;
+ (BOOL)canCreateComponentWithContext:;
@end
