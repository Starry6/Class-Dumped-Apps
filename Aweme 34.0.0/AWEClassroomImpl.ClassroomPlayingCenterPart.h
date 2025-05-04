@interface AWEClassroomImpl.ClassroomPlayingCenterPart : NSObject
- (void)playForRemoteControl;
- (void)pauseForRemoteControl;
- (void)seekToTimeForRemoteControl:;
- (void)playPrevForRemoteControl;
- (void)playNextForRemoteControl;
- (BOOL)canPlayForRemoteControl;
- (BOOL)canPauseForRemoteControl;
- (BOOL)canPlayPrevForRemoteControl;
- (BOOL)canPlayNextForRemoteControl;
- (BOOL)canSeekForRemoteControl;
- (id)nowPlayingInfo;
- (void)didBecomeActive;
- (void)didEnterBackground;
- (id)init;
- (void).cxx_destruct;
@end
