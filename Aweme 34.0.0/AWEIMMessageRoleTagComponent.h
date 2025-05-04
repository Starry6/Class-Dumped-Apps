@interface AWEIMMessageRoleTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUILabelPresenter labelPresenter;
@property (nonatomic) AWEIMUIViewPresenter viewPresenter;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_updatePresenter:;
- (void)p_updateProps:;
- (void)setLabelPresenter:;
- (id)labelPresenter;
- (void)p_observerConversationUpdate;
- (id)viewPresenter;
- (void)setViewPresenter:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
