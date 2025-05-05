@interface LPStreamingAudioPlayButtonControl : LPPlayButtonControl
- (void)dealloc;
- (id)playable;
- (void).cxx_destruct;
- (void)buttonPressed:;
- (void)audioPlayer:didTransitionToState:;
- (void)audioPlayer:didChangeProgress:;
- (void)audioPlayerDidFailToPlay:;
- (id)initWithAudio:style:theme:player:;
@end
