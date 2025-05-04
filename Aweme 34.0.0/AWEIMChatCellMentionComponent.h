@interface AWEIMChatCellMentionComponent : AWEIMChatCellComponentBase
@property (nonatomic) <AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)didUpdateWithHintType:;
- (void)setHintComponentInterface:;
- (id)hintComponentInterface;
- (BOOL)p_disableHighLightWithChat:;
- (void)__updatePresenter;
- (BOOL)__hintIsCompatibleWithMention;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
