@interface IESEffectDownloadConfigParams : NSObject
@property (nonatomic) BOOL parallelDownload;
@property (nonatomic) q queuePriority;
@property (nonatomic) q qualityOfService;
- (BOOL)parallelDownload;
- (void)setParallelDownload:;
- (void)setQualityOfService:;
- (id)init;
- (void)setQueuePriority:;
- (long long)qualityOfService;
- (long long)queuePriority;
@end
