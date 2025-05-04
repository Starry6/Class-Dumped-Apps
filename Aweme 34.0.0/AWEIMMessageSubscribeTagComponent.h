@interface AWEIMMessageSubscribeTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUIButtonPresenter buttonPresenter;
@property (nonatomic) AWEIMFansTagItemModel tagItemModel;
- (void)componentDidMounted:;
- (void)p_addKVO:;
- (void)p_updatePresenter:;
- (void)p_updateProps:;
- (id)buttonPresenter;
- (void)setButtonPresenter:;
- (void)setTagItemModel:;
- (id)tagItemModel;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
