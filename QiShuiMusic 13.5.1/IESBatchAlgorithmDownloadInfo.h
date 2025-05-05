@interface IESBatchAlgorithmDownloadInfo : NSObject
@property (nonatomic) double beginDownloadTimeStamp;
@property (nonatomic) Q algorithmModelCount;
@property (nonatomic) Q downloadAlgorithmModelCount;
@property (nonatomic) Q downloadAlgorithmModelSize;
@property (nonatomic) Q downloadAlgorithmModelDuration;
- (void)setDownloadAlgorithmModelCount:;
- (unsigned long long)algorithmModelCount;
- (double)beginDownloadTimeStamp;
- (unsigned long long)downloadAlgorithmModelCount;
- (unsigned long long)downloadAlgorithmModelDuration;
- (unsigned long long)downloadAlgorithmModelSize;
- (void)setAlgorithmModelCount:;
- (void)setBeginDownloadTimeStamp:;
- (void)setDownloadAlgorithmModelDuration:;
- (void)setDownloadAlgorithmModelSize:;
@end
