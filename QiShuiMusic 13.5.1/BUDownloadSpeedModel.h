@interface BUDownloadSpeedModel : NSObject
@property (nonatomic) double startDownloadTime;
@property (nonatomic) double finishDownloadTime;
@property (nonatomic) q downloadSize;
@property (nonatomic) double speed;
- (double)finishDownloadTime;
- (void)setFinishDownloadTime:;
- (void)setStartDownloadTime:;
- (double)startDownloadTime;
- (void)setSpeed:;
- (long long)downloadSize;
- (double)speed;
- (void)setDownloadSize:;
@end
