@interface AWEIMMessageOfficialAccountTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUILabelPresenter labelPresenter;
- (void)componentDidMounted:;
- (void)p_updateProps:;
- (void)setLabelPresenter:;
- (id)labelPresenter;
- (void)p_createPresenterIfNeed:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
