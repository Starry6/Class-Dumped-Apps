@interface IESLiveSaaSAVAudioPlayer : NSObject
@property (nonatomic) AVAudioPlayer player;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveSaaSAudioPlayerDelegate> delegate;
@property (nonatomic) <IESLiveSaaSAudioPlayerInput> audioInput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) float volume;
- (void)startPlay;
- (void)stopPlay;
- (float)volume;
- (void)setVolume:;
- (void)setDelegate:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (id)player;
- (id)delegate;
- (void).cxx_destruct;
- (void)setPlayer:;
- (BOOL)prepareToPlay;
- (void)audioPlayerDidFinishPlaying:successfully:;
- (void)audioPlayerDecodeErrorDidOccur:error:;
- (id)audioInput;
- (void)setAudioInput:;
@end
