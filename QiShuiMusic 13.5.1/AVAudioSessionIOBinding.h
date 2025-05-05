@interface AVAudioSessionIOBinding : NSObject
@property (nonatomic) AVAudioSession session;
@property (nonatomic) NSArray streams;
- (id)initWithSession:;
- (id)session;
- (void).cxx_destruct;
- (id)description;
- (id)streams;
- (id)initWithSession:streams:error:;
@end
