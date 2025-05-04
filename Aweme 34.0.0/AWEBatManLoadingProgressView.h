@interface AWEBatManLoadingProgressView : UIView
@property (nonatomic) UIColor progressColor;
@property (nonatomic) CALayer frontLayer;
@property (nonatomic) CALayer backgroundLayer;
@property (nonatomic) double progress;
@property (nonatomic) UIColor progressBackgroundColor;
- (void)configLayerUI;
- (void)layoutSublayersOfLayer:;
- (id)init;
- (double)progress;
- (void).cxx_destruct;
- (void)setProgress:;
- (id)backgroundLayer;
- (id)progressBackgroundColor;
- (id)progressColor;
- (void)setBackgroundLayer:;
- (void)setProgressBackgroundColor:;
- (void)setProgressColor:;
- (id)frontLayer;
- (void)setFrontLayer:;
@end
