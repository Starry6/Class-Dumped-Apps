@interface AWEIMNameExtendMgrComponent : AWEIMChatCellComponentBase
@property (nonatomic) AWEIMCellComponentBase currentDisplaySubComponent;
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
- (void)refreshNameExtend;
- (id)currentDisplaySubComponent;
- (void)setCurrentDisplaySubComponent:;
- (void)p_arrangeSubComponent;
- (void).cxx_destruct;
- (id)componentManager;
+ (BOOL)canCreateComponentWithContext:;
@end
