@interface IESLiveBigPartyLimitTimeProgress : UIView
@property (nonatomic) UIView progressView;
@property (nonatomic) CAShapeLayer maskLayer;
@property (nonatomic) double progress;
- (void)p_addRoundingCorners;
- (void)layoutSubviews;
- (void)setProgress:;
- (void)setProgressView:;
- (double)progress;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)progressView;
- (id)maskLayer;
- (void)setMaskLayer:;
- (void)updateProgress:;
@end
