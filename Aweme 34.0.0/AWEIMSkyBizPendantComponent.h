@interface AWEIMSkyBizPendantComponent : AWEIMSkylightBaseComponent
@property (nonatomic) BOOL momentUserSettingDisabled;
@property (nonatomic) <AWEIMSkylightCellPendantInterface> pendantInterface;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)componentDidMounted:;
- (BOOL)momentUserSettingDisabled;
- (void)closeFriendsDidUpdatedUserSetting:;
- (void)updateComponentAfterModelUpdate;
- (void)p_updateBusinessDot;
- (void)setMomentUserSettingDisabled:;
- (id)pendantInterface;
- (void)setPendantInterface:;
- (void)dealloc;
- (void).cxx_destruct;
+ (BOOL)canCreateComponentWithContext:;
@end
