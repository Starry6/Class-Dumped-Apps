@interface AWEIMUploadProgressView : UIView
@property (nonatomic) CAShapeLayer baseLayer;
@property (nonatomic) CAShapeLayer progressLayer;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) UIImageView cloudImageView;
@property (nonatomic) double progress;
@property (nonatomic) Q style;
- (void)p_updateProgress;
- (id)cloudImageView;
- (void)setCloudImageView:;
- (void)resetProgress;
- (id)initWithFrame:;
- (double)progress;
- (unsigned long long)style;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgress:;
- (void)setStyle:;
- (id)baseLayer;
- (id)progressLabel;
- (void)setBaseLayer:;
- (void)setProgressLabel:;
- (id)progressLayer;
- (void)setProgressLayer:;
@end
