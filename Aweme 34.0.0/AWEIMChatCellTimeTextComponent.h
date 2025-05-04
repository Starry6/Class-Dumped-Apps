@interface AWEIMChatCellTimeTextComponent : AWEIMChatCellComponentBase
@property (nonatomic) <AWEIMChatCellHintComponentInterface> hintComponentInterface;
@property (nonatomic) double lastRefreshTime;
@property (nonatomic) BOOL needRefreshOnCellRender;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onCellWillRenderForCurrentComponent;
- (void)setLastRefreshTime:;
- (double)lastRefreshTime;
- (id)presenterForSnapshot;
- (void)didUpdateWithHintType:;
- (void)setHintComponentInterface:;
- (id)hintComponentInterface;
- (void)__updatePresenter;
- (BOOL)needRefreshOnCellRender;
- (void)setNeedRefreshOnCellRender:;
- (void)p_updateTimeDisplay;
- (BOOL)__hintIsCompatibleWithTimeText;
- (BOOL)p_canDisplayTimeForLastMessage;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
