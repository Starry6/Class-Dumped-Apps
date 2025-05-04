@interface AWELSBarWatchVideoLaterProgressView : UIView
@property (nonatomic) UIView progressView;
@property (nonatomic) double progress;
- (void)updatePlayProgress:;
- (id)progressView;
- (id)initWithFrame:;
- (double)progress;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgress:;
- (void)setupUI;
@end
