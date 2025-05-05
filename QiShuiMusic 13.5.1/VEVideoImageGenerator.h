@interface VEVideoImageGenerator : VEVideoReader
@property (nonatomic) AVAssetReader assetReader;
@property (nonatomic) AVAssetReaderOutput videoOutput;
@property (nonatomic) VEVideoConfig config;
@property (nonatomic) {?=qiIq} startTime;
@property (nonatomic) VECurveTransUtils curveTransUtils;
- (id)curveTransUtils;
- (void)initAssetReader:;
- (id)p_convertTimeLineToVideoTime:;
- (void)setCurveTransUtils:;
- (void)seekToTime:;
- (void)dealloc;
- (id)videoOutput;
- (void)play;
- (void)setConfig:;
- (id)initWithConfig:;
- (void)setStartTime:;
- (void)setVideoOutput:;
- (void)stop;
- (id)startTime;
- (void).cxx_destruct;
- (void)pause;
- (id)config;
- (id)assetReader;
- (void)setAssetReader:;
- (id)copySampleBufferAtTime:;
@end
