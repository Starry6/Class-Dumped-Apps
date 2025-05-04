@interface AWEIMAttachmentPreTranscodeStage : AWEIMStage
@property (nonatomic) AWEIMVideoTransCoder transcoder;
- (id)transcoder;
- (void)setTranscoder:;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)start;
@end
