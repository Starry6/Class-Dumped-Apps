@interface IESECLiveRoomPlayerRepeater : NSObject
@property (nonatomic) IESECContextProxy liveContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isPause;
- (void)setLiveContext:;
- (id)initWithContextProxy:;
- (id)liveContext;
- (void)pauseWithCallTrace:;
- (void)playWithCallTrace:;
- (BOOL)isPlaying;
- (void)setMute:;
- (void).cxx_destruct;
- (BOOL)isMute;
@end
