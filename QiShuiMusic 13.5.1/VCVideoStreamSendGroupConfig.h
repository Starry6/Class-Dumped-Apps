@interface VCVideoStreamSendGroupConfig : VCMediaStreamSendGroupConfig
@property (nonatomic) VCMoments moments;
- (id)moments;
- (void)setMoments:;
- (void)dealloc;
- (int)captureSource;
- (void)setCaptureSource:;
@end
