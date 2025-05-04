@interface AWEIMMessageActiveTagComponent : AWEIMFlexComponent
@property (nonatomic) AWEIMUIButtonPresenter buttonPresenter;
@property (nonatomic) BOOL activeTagDisplayStatus;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)p_addKVO:;
- (void)p_updatePresenter:;
- (void)p_updateProps:;
- (id)buttonPresenter;
- (void)setButtonPresenter:;
- (void)p_clickActiveTag:;
- (BOOL)activeTagDisplayStatus;
- (void)setActiveTagDisplayStatus:;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
