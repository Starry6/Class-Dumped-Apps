@interface IESVideoVolumConvert : NSObject
@property (nonatomic) IESVideoVolumConvertConfig config;
@property (nonatomic) AVAssetReader reader;
@property (nonatomic) AVAssetReaderOutput output;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) BOOL finished;
@property (nonatomic) double duration;
@property (nonatomic) q maxFrameCount;
- (long long)maxFrameCount;
- (void)setMaxFrameCount:;
- (void)startProcess:;
- (id)output;
- (void)setFinished:;
- (void)cancel;
- (void)dealloc;
- (BOOL)finished;
- (void)setConfig:;
- (void)setOutput:;
- (void)setDuration:;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)config;
- (id)reader;
- (double)duration;
- (id)queue;
- (void)setReader:;
- (id)initWithConfig:error:;
@end
