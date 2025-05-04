@interface AWEIMChatCellMessageHintComponent : AWEIMChatCellComponentBase
@property (nonatomic) NSAttributedString latestMessageHint;
@property (nonatomic) NSAttributedString rawAttributedStringBeforeMatchEmoji;
@property (nonatomic) <AWEIMChatCellMessageStateInterface> messageStateService;
@property (nonatomic) AWEIMCellComponentBase currentDisplaySubComponent;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onCellWillRenderForCurrentComponent;
- (void)assembleLatestMessageHint:;
- (id)latestMessageHint;
- (id)rawAttributedStringBeforeMatchEmoji;
- (id)currentDisplaySubComponent;
- (void)setCurrentDisplaySubComponent:;
- (void)setMessageStateService:;
- (id)messageStateService;
- (void)setRawAttributedStringBeforeMatchEmoji:;
- (void)setLatestMessageHint:;
- (void).cxx_destruct;
- (id)componentManager;
@end
