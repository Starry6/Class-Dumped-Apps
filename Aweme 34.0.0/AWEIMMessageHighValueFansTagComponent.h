@interface AWEIMMessageHighValueFansTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUILabelPresenter labelPresenter;
- (void)componentDidMounted:;
- (void)p_addKVO:;
- (void)p_updatePresenter:;
- (void)p_updateProps:;
- (void)setLabelPresenter:;
- (id)labelPresenter;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
