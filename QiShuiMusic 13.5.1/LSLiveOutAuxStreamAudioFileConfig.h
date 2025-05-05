@interface LSLiveOutAuxStreamAudioFileConfig : NSObject
@property (nonatomic) NSURL audioURL;
@property (nonatomic) NSString audioId;
@property (nonatomic) @? audioPlayErrorBlock;
@property (nonatomic) @? audioPlayEndBlock;
@property (nonatomic) @? audioPlayWillStartBlock;
@property (nonatomic) @? audioPlayDidStartBlock;
- (id)audioId;
- (id)audioPlayDidStartBlock;
- (id)audioPlayEndBlock;
- (id)audioPlayErrorBlock;
- (id)audioPlayWillStartBlock;
- (void)setAudioId:;
- (void)setAudioPlayDidStartBlock:;
- (void)setAudioPlayEndBlock:;
- (void)setAudioPlayErrorBlock:;
- (void)setAudioPlayWillStartBlock:;
- (void).cxx_destruct;
- (id)audioURL;
- (void)setAudioURL:;
@end
