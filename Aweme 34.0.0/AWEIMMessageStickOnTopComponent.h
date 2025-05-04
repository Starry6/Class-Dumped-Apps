@interface AWEIMMessageStickOnTopComponent : AWEIMFlexComponent
@property (nonatomic) BOOL isStickOnTop;
- (void)componentDidMounted:;
- (void)setIsStickOnTop:;
- (BOOL)isStickOnTop;
- (void)p_addKVO:;
- (void)p_stickOnTopButtonTap;
- (void)p_setButtonStateWithStickOnTop:;
+ (BOOL)canCreateComponentWithContext:;
@end
