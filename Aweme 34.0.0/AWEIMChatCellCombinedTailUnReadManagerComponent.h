@interface AWEIMChatCellCombinedTailUnReadManagerComponent : AWEIMChatCellComponentBase
@property (nonatomic) AWEIMChatCellComponentBase<AWEIMChatCellTailProvider> currentDisplaySubComponent;
@property (nonatomic) AWEIMComponentManager componentManager;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)componentContext;
- (id)componentsNameArrayWithContext:;
- (void)setComponentManager:;
- (void)componentDidMounted:;
- (void)updateComponentWhenChatUpdate:;
- (void)onPresenter:willUpdateView:;
- (void)onCellWillRenderForCurrentComponent;
- (id)presenterForSnapshot;
- (void)reloadUnReadComponent;
- (id)currentDisplaySubComponent;
- (void)setCurrentDisplaySubComponent:;
- (void).cxx_destruct;
- (id)componentManager;
@end
