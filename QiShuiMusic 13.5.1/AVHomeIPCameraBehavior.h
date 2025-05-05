@interface AVHomeIPCameraBehavior : NSObject
@property (nonatomic) AVHomeIPCameraBehaviorContext behaviorContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playbackControlsDidChangePlayerVolume:;
- (void).cxx_destruct;
- (void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:;
- (void)playbackControlsDidToggleMuted:;
- (void)willMoveToContext:;
- (id)behaviorContext;
- (void)setBehaviorContext:;
- (void)didMoveToContext:;
- (void)willRemoveFromContext:;
- (void)didRemoveFromContext:;
- (void)pictureInPictureActionButtonTapped;
+ (Class)behaviorContextClass;
@end
