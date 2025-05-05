@interface AVMusicAppBehavior : NSObject
@property (nonatomic) AVMusicAppBehaviorContext behaviorContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)playbackControlsDidChangePlayerVolume:;
- (void).cxx_destruct;
- (void)skipToNextItem;
- (void)skipToPreviousItem;
- (void)willMoveToContext:;
- (id)behaviorContext;
- (void)setBehaviorContext:;
- (void)didMoveToContext:;
- (void)willRemoveFromContext:;
- (void)didRemoveFromContext:;
- (void)pictureInPictureActionButtonTapped;
- (void)contextWillHandleUserAction:;
+ (Class)behaviorContextClass;
@end
