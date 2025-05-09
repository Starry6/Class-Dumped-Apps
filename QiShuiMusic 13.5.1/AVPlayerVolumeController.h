@interface AVPlayerVolumeController : NSObject
@property (nonatomic) BOOL changingVolume;
@property (nonatomic) AVObservationController keyValueObservationController;
@property (nonatomic) AVPlayerController playerController;
@property (nonatomic) float volume;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden;
@property (nonatomic) BOOL currentRouteHasVolumeControl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)currentRouteHasVolumeControl;
- (id)init;
- (float)volume;
- (void)dealloc;
- (void)endChangingVolume;
- (id)playerController;
- (void)setPrefersSystemVolumeHUDHidden:;
- (BOOL)isChangingVolume;
- (void)setPlayerController:;
- (void)setTargetVolume:;
- (void).cxx_destruct;
- (void)setClientWithIdentifier:forWindowSceneSessionWithIdentifier:;
- (BOOL)prefersSystemVolumeHUDHidden;
- (void)setChangingVolume:;
- (void)beginChangingVolume;
- (id)keyValueObservationController;
- (void)setKeyValueObservationController:;
+ (id)volumeController;
@end
