@interface AWEIMChatCellTailMgrComponent : AWEIMChatCellComponentBase
@property (nonatomic) AWEIMChatCellComponentBase<AWEIMChatCellTailProvider> currentDisplaySubComponent;
@property (nonatomic) <AWEIMChatCellTailAction> action;
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
- (void)onPresenter:willUpdateView:;
- (void)onCellWillRenderForCurrentComponent;
- (id)presenterForSnapshot;
- (void)reloadCellTails;
- (long long)displayingTailType;
- (id)currentDisplaySubComponent;
- (void)setCurrentDisplaySubComponent:;
- (void)setAction:;
- (id)action;
- (void).cxx_destruct;
- (id)componentManager;
@end
