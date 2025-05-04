@interface AWEIMMessageSendProgressView : UIView
@property (nonatomic) CAShapeLayer baseLayer;
@property (nonatomic) CAShapeLayer progressLayer;
@property (nonatomic) double width;
@property (nonatomic) double progress;
- (void)p_updateProgress;
- (void)iesim_themeReload:;
- (void)p_setupThemeDynamicConfig;
- (void)p_updateColor;
- (id)initWithWidth:lineWidth:strokeColor:baseStrokeColor:;
- (void)setWidth:;
- (void)resetProgress;
- (double)progress;
- (id)initWithWidth:;
- (double)width;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setProgress:;
- (id)baseLayer;
- (void)setBaseLayer:;
- (id)progressLayer;
- (void)setProgressLayer:;
@end
