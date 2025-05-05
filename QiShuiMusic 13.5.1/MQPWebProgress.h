@interface MQPWebProgress : UIView
@property (nonatomic) float progress;
@property (nonatomic) UIView progressBarView;
@property (nonatomic) NSTimer timer;
- (void)clearTimer;
- (void)dealloc;
- (void)setProgress:;
- (void)setTimer:;
- (float)progress;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)timer;
- (void)startProgress;
- (void)setProgress:animated:;
- (void)configureViews;
- (void)handleTimer:;
- (void)stopProgress;
- (id)progressBarView;
- (void)setProgressBarView:;
@end
