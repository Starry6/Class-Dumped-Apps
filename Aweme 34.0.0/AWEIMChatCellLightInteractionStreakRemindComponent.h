@interface AWEIMChatCellLightInteractionStreakRemindComponent : AWEIMChatCellComponentBase
@property (nonatomic) <AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (long long)currentComponentTailType;
- (void)didUpdateWithHintType:;
- (void)setHintComponentInterface:;
- (id)hintComponentInterface;
- (void)didClickConsecutiveChatRemindButton;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
