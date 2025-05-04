@interface AWEIMMessageNameComponent : AWEIMFlexComponent
@property (nonatomic) NSString groupAlias;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)needUpdateDisplayWithContextOptions:;
- (void)componentDidMounted:;
- (void)setGroupAlias:;
- (void)onCellWillRenderForCurrentComponent;
- (void)p_createPresenterIfNeeded;
- (id)groupAlias;
- (void)p_addKVO:;
- (void)p_updatePresenter:;
- (void)updateGroupNicknameNoti:;
- (void)p_configTextColor;
- (void)dealloc;
- (id)displayName;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
