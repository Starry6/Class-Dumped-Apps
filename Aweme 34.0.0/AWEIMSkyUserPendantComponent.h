@interface AWEIMSkyUserPendantComponent : AWEIMSkylightBaseComponent
@property (nonatomic) <AWEIMSkylightCellPendantInterface> pendantInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)afterInitialComponentAllResolved:;
- (void)componentDidMounted:;
- (void)updateComponentAfterModelUpdate;
- (void)lightDarkThemeDidChange;
- (void)imUserDidChange;
- (BOOL)p_isOnlineWithModel:;
- (id)pendantInterface;
- (void)setPendantInterface:;
- (void)p_updatePresenter:;
- (void)monitorOnlineStatus;
- (void)p_updateOnline;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
