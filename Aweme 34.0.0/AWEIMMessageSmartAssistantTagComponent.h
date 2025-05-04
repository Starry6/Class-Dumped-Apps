@interface AWEIMMessageSmartAssistantTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMMessageSmartAssistantTagViewModel smartAssistantTagViewModel;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_createPresenterIfNeeded;
- (void)setSmartAssistantTagViewModel:;
- (id)smartAssistantTagViewModel;
- (void)p_didTappedTag;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
