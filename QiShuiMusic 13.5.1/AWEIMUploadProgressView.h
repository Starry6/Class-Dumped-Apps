@interface AWEIMUploadProgressView : UIView
@property (nonatomic) CAShapeLayer baseLayer;
@property (nonatomic) CAShapeLayer progressLayer;
@property (nonatomic) UILabel progressLabel;
@property (nonatomic) double progress;
- (void)p_updateProgress;
- (void)layoutSubviews;
- (void)setProgress:;
- (double)progress;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)progressLabel;
- (id)baseLayer;
- (void)setBaseLayer:;
- (void)setProgressLabel:;
- (id)progressLayer;
- (void)setProgressLayer:;
@end
