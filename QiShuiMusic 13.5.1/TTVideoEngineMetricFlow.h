@interface TTVideoEngineMetricFlow : TTVideoEngineMetricInfoBase
@property (nonatomic) q totalUpload;
@property (nonatomic) q totalDownload;
- (void)setTotalUpload:;
- (void)setTotalDownload:;
- (long long)totalDownload;
- (long long)totalUpload;
@end
