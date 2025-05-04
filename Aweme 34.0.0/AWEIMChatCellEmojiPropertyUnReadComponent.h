@interface AWEIMChatCellEmojiPropertyUnReadComponent : AWEIMChatCellComponentBase
@property (nonatomic) <AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (nonatomic) BOOL shouldShowRed;
@property (nonatomic) BOOL shouldBoldLastMsgHint;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (long long)currentComponentTailType;
- (void)didUpdateWithHintType:;
- (BOOL)p_shouldShowUnReadEmoji:;
- (BOOL)shouldBoldLastMsgHint;
- (void)p_updateIfNeeded;
- (BOOL)shouldShowRed;
- (void)setShouldShowRed:;
- (void)setShouldBoldLastMsgHint:;
- (void)p_updatePresenterWithChat:;
- (void)setHintComponentInterface:;
- (id)hintComponentInterface;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
