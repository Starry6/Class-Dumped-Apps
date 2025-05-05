@interface IESLiveContourDetectConfig : NSObject
@property (nonatomic) BOOL enable;
@property (nonatomic) q userCountForNormally;
@property (nonatomic) q captureRate;
- (void)setCaptureRate:;
- (long long)captureRate;
- (void)setUserCountForNormally:;
- (long long)userCountForNormally;
- (BOOL)enable;
- (void)setEnable:;
@end
