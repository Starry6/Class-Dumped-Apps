@interface UIPointerLockState : NSObject
@property (nonatomic) BOOL locked;
@property (nonatomic) UIScene _scene;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isLocked;
- (id)_scene;
- (id)_windowScene;
- (id)initWithScene:;
- (id)_settingsDiffActionsForScene:;
- (void)_setScene:;
- (id)windowHostingScene;
- (void).cxx_destruct;
- (void)_preferredPointerLockStatusUpdated;
- (void)_pointerLockStatusUpdated;
@end
