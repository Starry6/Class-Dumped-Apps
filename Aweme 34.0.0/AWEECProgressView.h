@interface AWEECProgressView : UIView
@property (nonatomic) double lastValue;
@property (nonatomic) UIView progressView;
@property (nonatomic) double progressValue;
@property (nonatomic) double totalValue;
@property (nonatomic) BOOL needAnimation;
@property (nonatomic) double interval;
- (void)setNeedAnimation:;
- (double)widthWithProgress:totalValue:;
- (void)updateProgressValue:totalValue:animated:;
- (BOOL)needAnimation;
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
- (void)setLastValue:;
@end
