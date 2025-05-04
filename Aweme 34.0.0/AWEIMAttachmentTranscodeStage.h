@interface AWEIMAttachmentTranscodeStage : AWEIMStage
@property (nonatomic) AWEIMVideoTransCoder transcoder;
@property (nonatomic) NSTimer timeoutTimer;
@property (nonatomic) BOOL isVENotTranscoding;
- (id)transcoder;
- (void)setTranscoder:;
- (void)p_reportTranscodeFinish:;
- (void)setIsVENotTranscoding:;
- (void)transcodeTimeout;
- (BOOL)isVENotTranscoding;
- (void)dealloc;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)start;
- (id)timeoutTimer;
- (void)setTimeoutTimer:;
@end
