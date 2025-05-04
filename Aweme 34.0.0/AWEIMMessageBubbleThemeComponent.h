@interface AWEIMMessageBubbleThemeComponent : AWEIMFlexComponent
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (void)p_createPresenterIfNeed;
- (void)onChatThemeDidChange:;
+ (BOOL)canCreateComponentWithContext:;
@end
