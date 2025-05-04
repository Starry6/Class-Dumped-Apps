@interface AWECommentMediaDownloaderContext : NSObject
@property (nonatomic) double progress;
@property (nonatomic) double downloadBarHeight;
@property (nonatomic) AWEMediaDownloadCommentTask currentTask;
@property (nonatomic) AWEMediaDownloadCommentTask retryTask;
@property (nonatomic) UIViewController currentAppearVC;
- (long long)currentTaskStatus;
- (id)retryTask;
- (void)setCurrentAppearVC:;
- (id)currentAppearVC;
- (void)setRetryTask:;
- (id)currentDownloadAwemeID;
- (double)downloadBarHeight;
- (void)setDownloadBarHeight:;
- (id)currentTask;
- (void)setCurrentTask:;
- (double)progress;
- (void).cxx_destruct;
- (void)setProgress:;
@end
