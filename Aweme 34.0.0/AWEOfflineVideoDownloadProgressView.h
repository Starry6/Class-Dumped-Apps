@interface AWEOfflineVideoDownloadProgressView : UIView
@property (nonatomic) UIView progressView;
@property (nonatomic) UIColor downloadingColor;
@property (nonatomic) UIColor pausedColor;
@property (nonatomic) BOOL isPauseStyle;
@property (nonatomic) double progressPercent;
- (BOOL)isPauseStyle;
- (void)setIsPauseStyle:;
- (id)pausedColor;
- (id)downloadingColor;
- (void)setDownloadingColor:;
- (void)setPausedColor:;
- (id)init;
- (double)progressPercent;
- (id)progressView;
- (void)setProgressView:;
- (void)setProgressPercent:;
- (void).cxx_destruct;
- (void)reset;
- (void)setupView;
@end
