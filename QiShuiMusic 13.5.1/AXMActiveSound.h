@interface AXMActiveSound : NSObject
@property (nonatomic) AVAudioPlayerNode player;
@property (nonatomic) AVAudioUnitTimePitch timePitch;
- (id)init;
- (id)player;
- (void).cxx_destruct;
- (void)setPlayer:;
- (void)connectToEngine:;
- (void)disconnectFromEngine:;
- (BOOL)beginPlayback:withError:;
- (id)timePitch;
- (void)setTimePitch:;
@end
