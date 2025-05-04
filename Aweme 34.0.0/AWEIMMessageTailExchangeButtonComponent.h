@interface AWEIMMessageTailExchangeButtonComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)contentMaskWillDismissOrShow:forMessage:currentMessage:;
- (void)p_didTapExchangeButton;
+ (BOOL)canCreateComponentWithContext:;
@end
