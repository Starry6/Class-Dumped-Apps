@interface CUAudioRequest : NSObject
@property (nonatomic) AVAudioPlayer audioPlayer;
@property (nonatomic) @? completion;
@property (nonatomic) NSString label;
- (id)completion;
- (void)setCompletion:;
- (void)setAudioPlayer:;
- (void)setLabel:;
- (id)label;
- (void).cxx_destruct;
- (id)audioPlayer;
@end
