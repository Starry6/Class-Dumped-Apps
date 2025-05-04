@interface AWESearchAlbumProgressView : UIView
@property (nonatomic) double lastValue;
@property (nonatomic) UIView progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) UIColor progressColor;
@property (nonatomic) double interval;
- (void)setNeedAnimation:;
- (BOOL)needAnimation;
- (void)fillWholeProgress;
- (void)clearWholeProgress;
- (double)interval;
- (id)init;
- (double)totalValue;
- (double)progressValue;
- (id)progressView;
- (void)setInterval:;
- (void)setProgressView:;
- (void)setTotalValue:;
- (void).cxx_destruct;
- (double)lastValue;
- (void)setProgressValue:;
- (void)layoutSubviews;
- (id)progressColor;
- (void)setProgressColor:;
- (void)setLastValue:;
@end
