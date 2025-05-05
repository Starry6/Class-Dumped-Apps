@interface MPVolumeHUDController : NSObject
@property (nonatomic) @ mainContext;
- (void)setNeedsUpdate;
- (id)init;
- (void)_addCategory:;
- (void)registerView:inContext:;
- (void)_updateVisibility;
- (id)mainContext;
- (void)_updateVisibilityForVolumeDisplays:inWindowScene:;
- (void)addVolumeDisplay:;
- (void).cxx_destruct;
- (void)unregisterView:inContext:;
- (void)removeVolumeDisplay:;
+ (id)sharedInstance;
@end
