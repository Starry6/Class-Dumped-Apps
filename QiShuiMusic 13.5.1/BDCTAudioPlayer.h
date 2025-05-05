@interface BDCTAudioPlayer : NSObject
@property (nonatomic) AVAudioPlayer audioPlayer;
@property (nonatomic) NSString playingURLString;
@property (nonatomic) Q audioPlayerState;
@property (nonatomic) @? executationBlock;
@property (nonatomic) NSObject<OS_dispatch_queue> audioPlayerQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopAudioPlayer;
- (id)audioPlayerQueue;
- (unsigned long long)audioPlayerState;
- (id)executationBlock;
- (void)playAudioWithFilePath:;
- (void)playAudioWithFileURL:;
- (id)playingURLString;
- (void)setAudioPlayerQueue:;
- (void)setAudioPlayerState:;
- (void)setExecutationBlock:;
- (void)setPlayingURLString:;
- (void)setAudioPlayer:;
- (id)init;
- (void).cxx_destruct;
- (id)audioPlayer;
- (void)audioPlayerDidFinishPlaying:successfully:;
@end
