@interface CSJLottiePlayerControlView : UIView
@property (nonatomic) CSJLottiePlayerControlModel model;
@property (nonatomic) UIView finishView;
@property (nonatomic) q state;
@property (nonatomic) UIImageView coverView;
@property (nonatomic) CSJLottiePlayerActivityView activity;
@property (nonatomic) UIProgressView progressView;
- (void)showCoverImage:;
- (id)finishView;
- (id)finishedContainer;
- (void)setFinishView:;
- (void)setProgress:totalTime:;
- (id)model;
- (void)setupConstraints;
- (void)setModel:;
- (id)initWithModel:;
- (void)setState:;
- (void)setActivity:;
- (void)setProgressView:;
- (id)activity;
- (long long)state;
- (void).cxx_destruct;
- (id)progressView;
- (void)setupViews;
- (id)coverView;
- (void)setCoverView:;
@end
