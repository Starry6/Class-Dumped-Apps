@interface ABUVideoAdReporter : NSObject
@property (nonatomic) ABUAdPackage adPackage;
@property (nonatomic) NSNumber videoDuration;
- (id)initWithDrawAd:;
- (id)adPackage;
- (void)didBreakVideoWithCurrentDuration:;
- (void)didClickVideoViewWithCurrentDuration:;
- (void)didFinishVideo;
- (void)didPauseVideoWithCurrentDuration:;
- (void)didPlayFailedWithError:;
- (void)didPlayStartFailedWithError:;
- (void)didResumeVideoWithCurrentDuration:;
- (void)didStartPlayVideo;
- (id)initWithNativeAd:;
- (id)nativeAd;
- (void)setAdPackage:;
- (id)init;
- (BOOL)isMemberOfClass:;
- (id)videoDuration;
- (id)adapter;
- (void).cxx_destruct;
- (BOOL)isKindOfClass:;
- (void)setVideoDuration:;
@end
