@interface PHASEStreamInfoImpl : NSObject
@property (nonatomic) AVAudioFormat format;
@property (nonatomic) I latencyInFrames;
- (id)format;
- (void).cxx_destruct;
- (unsigned int)latencyInFrames;
- (id)initWithFormat:latencyInFrames:;
@end
