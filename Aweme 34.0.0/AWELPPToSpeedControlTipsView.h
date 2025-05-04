@interface AWELPPToSpeedControlTipsView : UIView
@property (nonatomic) UIView contentView;
@property (nonatomic) UIView progressView;
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) double progress;
@property (nonatomic) NSString tips;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)updateProgressViewFrame;
- (id)progressView;
- (id)initWithFrame:;
- (double)progress;
- (id)contentView;
- (id)tips;
- (void)setProgressView:;
- (void).cxx_destruct;
- (void)setContentView:;
- (void)layoutSubviews;
- (void)setTips:;
- (void)setProgress:;
- (void)setupView;
@end
