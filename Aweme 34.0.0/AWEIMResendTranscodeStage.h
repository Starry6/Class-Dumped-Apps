@interface AWEIMResendTranscodeStage : AWEIMStage
@property (nonatomic) AWEIMVideoTransCoder transcoder;
- (id)transcoder;
- (void)setTranscoder:;
- (void)p_reportTranscodeFinish:;
- (void)p_transcodeWithFileIDArray:message:content:conversation:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)start;
@end
